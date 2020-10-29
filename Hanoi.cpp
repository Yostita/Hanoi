/*----------------------------------*/
/*  Practica 7. José Luis Bellosta  */
/*----------------------------------*/
#include <iostream>
#include "Pila.h"
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}

using namespace std;

void Hanoi(int n, Pila *origen, Pila *destino, Pila *temporal) {

	assertdomjudge(n > 0);

	//Caso base el disco más pequeño en este caso el 1
	if (n == 1) {

		destino->apilar(origen->desapilar());

		return;

	}
	//En cualquier otro caso siempre habrá que pasar los discos al
	//pilar donde no este el disco 1 esto lo realizo con un cambio
	//de pilares orgien destino y temporal en la llamada recursiva
	//la cual ira reduciendo siempre el numero del disco para llegar de
	//nuevo al caso base y realizar el cambio de el disco 1 a un pilar en el
	//que hay un disco de mayor tamaño
	else {

		Hanoi(n - 1, origen, temporal, destino);

		destino->apilar(origen->desapilar());

		Hanoi(n - 1, temporal, destino, origen);

	}

}


int main() {

	Pila *A = new Pila("A");
	Pila *B = new Pila("B");
	Pila *C = new Pila("C");

	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {

		A->apilar(i);

	}

	Hanoi(n, A, C, B);

	for (int i = 0; i < n; i++) {

		C->desapilar();

	}
	return 0;

}

