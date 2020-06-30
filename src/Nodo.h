#ifndef NODO_H_
#define NODO_H_

template <class T> class Nodo{

private:
	T dato;
	Nodo<T>* siguiente;

public:
	/**
	 * @post: se crea el Nodo con el nuevoDato
	 */
	Nodo(T nuevoDato){

		dato = nuevoDato;
		siguiente = nullptr;
	}

	/**
	 * @post: cambia el valor del dato por nuevoDato
	 */
	void setDato(int nuevoDato){
		this->dato = nuevoDato;
	}

	/**
	 * @post: devuelve el valor del dato
	 */
	T getDato(){
		return this->dato;
	}

	/**
	 * @post: cambia el Nodo siguiente
	 */
	void setSiguiente(Nodo<T>* nuevoSiguiente){
		this->siguiente = nuevoSiguiente;
	}

	/**
	 * @post: devuelve el Nodo siguiente
	 */
	Nodo<T>* getSiguiente(){
		return this->siguiente;
	}
};



#endif /* NODO_H_ */
