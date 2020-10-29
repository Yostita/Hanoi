/*----------------------------------*/
/*  Practica 7. José Luis Bellosta  */
/*----------------------------------*/
#include"Pila.h"

Pila::Pila(string name) {

	this->cima = nullptr;
	this->name = name;

}

std::string Pila::nombrePila() {

	return this->name;

}

void Pila::apilar(int num) {

	cout << "Apilando disco " << num << " en poste " << name << endl;

	if (this->estaVacia() == true) {

		Nodo* nodoAInsertar = new Nodo(num, nullptr);

		this->cima = nodoAInsertar;

	}
	else {

		Nodo* nodoSiguiente = new Nodo(this->cima->valor, this->cima->siguiente);
		Nodo* nodoAInsertar = new Nodo(num, nodoSiguiente);
		this->cima = nodoAInsertar;

	}

}

int Pila::desapilar() {
	int num = this->cima->valor;

	cout << "Desapilando disco " << num << " del poste " << name << endl;

	this->cima = this->cima->siguiente;

	return num;

}

bool Pila::estaVacia() {

	if (this->cima == nullptr) {

		return true;

	}

	return false;

}

