#pragma once
#include <iostream>
using namespace std;

struct NodoAB {
	int dato;
	NodoAB* izq;
	NodoAB* der;
	NodoAB() : dato(0), izq(NULL), der(NULL) {}
	NodoAB(int d) : dato(d), izq(NULL), der(NULL) {}
};

int altura(NodoAB* raiz);

int cantNodos(NodoAB* raiz);