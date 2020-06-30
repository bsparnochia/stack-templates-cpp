#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
	Stack<char> pila;

	cout << "lectura normal : ";
	pila.apilar('R');
	cout << pila.getTope();
	pila.apilar('O');
	cout << pila.getTope();
	pila.apilar('M');
	cout << pila.getTope();
	pila.apilar('A');
	cout << pila.getTope() << endl;

	cout << "lectura al revés : ";
	while (!pila.estaVacia()){
		cout << pila.desapilar();
	}
	return 0;
}




