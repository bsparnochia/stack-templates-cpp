#ifndef STACK_H_
#define STACK_H_

#include "Nodo.h"
#include <string>

template <class T> class Stack{

private:
	Nodo<T>* tope;

public:
	/**
	 * @post: Crea la pila sin elementos
	 */
	Stack();

	/**
	 * @post: agrega el elemento a la pila y este será el nuevo tope
	 */
	void apilar(T dato);

	/**
	 * @pre: la pila no esta vacía
	 * @post: quita el elemento que esta en el tope de la pila
	 * 			y lo devuelve
	 */
	T desapilar();

	/**
	 * @post: verifica si la pila esta vacía
	 */
	bool estaVacia();

	/**
	 * @pre: la pila no esta vacía
	 * @post: devuelve el elemento que esta en el tope de la pila
	 */
	T getTope();

	/**
	 * @post: destruye la pila y los elementos que contenga de no estar vacía
	 */
	~Stack();

};

template <class T> Stack<T>::Stack(){
	this->tope = nullptr;
}

template <class T> bool Stack<T>::estaVacia(){
	return !this->tope;
}

template <class T> T Stack<T>::getTope(){
	if (this->estaVacia()){
		throw std::string("No hay elementos en la pila!");
	}
	return this->tope->getDato();
}

template <class T> void Stack<T>::apilar(T dato){
	Nodo<T>* nuevo = new Nodo<T>(dato);

	if (!this->estaVacia()){
		nuevo->setSiguiente(tope);
	}

	tope = nuevo;
}

template <class T> T Stack<T>::desapilar(){
	if (this->estaVacia()){
		throw std::string("No se puede desapilar, no hay elementos en la pila");
	}

	Nodo<T>* removido = tope;
	T dato = removido->getDato();
	tope = tope->getSiguiente();
	delete removido;

	return dato;
}

template <class T> Stack<T>::~Stack(){
	while (!this->estaVacia()){
		this->desapilar();
	}
}

#endif /* STACK_H_ */
