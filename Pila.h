/*----------------------------------*/
/*  Practica 7. Jos� Luis Bellosta  */
/*----------------------------------*/
#include"Nodo.h"
#include<string>
#include<iostream>

using namespace std;

class Pila {

private:

	Nodo * cima;
	string name;

public:
	//Constructor por parametros. Inicializa el puntero a la cima y asigna el nombre indicado a la pila
	//Precondicion : ninguna
	//Complejidad Temporal : O(1)
	//Complejidad Espacial : O(1)
	Pila(string name);

	//Devuelve el nombre de la pila.
	//Precondicion : ninguna
	//Complejidad Temporal : O(1)
	//sComplejidad Espacial : O(1)
	string nombrePila();

	//Recibe un n�mero que representa el tama�o del disco y lo coloca en la cima de la pila.
	//Precondicion : ninguna
	//Complejidad Temporal : O(1)
	//Complejidad Espacial : O(1)
	void apilar(int num);

	//Devuelve el n�mero que se encuentra en la cima de la pila que 
	//representa el tama�o del disco que se encuentra en la parte superior.
	//Precondicion : ninguna
	//Complejidad Temporal : O(1)
	//Complejidad Espacial : O(1)
	int desapilar();

	//Indica si la pila se encuentra vac�a.
	//Precondicion : ninguna
	//Complejidad Temporal : O(1)
	//Complejidad Espacial : O(1)
	bool estaVacia();
};