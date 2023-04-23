#include "FuncionesArboles.h"

int altura(NodoAB* raiz) {
	if (!raiz) {
		return 0;
	}
	int alturaDerecha = altura(raiz->der);
	int alturaIzquierda = altura(raiz->izq);

	int alturaMayor = alturaDerecha > alturaIzquierda ? alturaDerecha : alturaIzquierda;

	return 1 + alturaMayor;
}

int cantNodos(NodoAB* raiz) {
	if (!raiz) {
		return 0;
	}
	int cantDerecha = cantNodos(raiz->der);
	int cantIzquierda = cantNodos(raiz->izq);

	return 1 + cantDerecha + cantIzquierda;
}