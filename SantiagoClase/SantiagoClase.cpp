#include <iostream>
#include "FuncionesListas.h"
#include "FuncionesArboles.h"

void crear(NodoLista* lista, int cantMultiplo, int valor) {
    // CB
    if (cantMultiplo == valor) {
        return;
    }

    //Paso Recusivo
    NodoLista* nuevo = new NodoLista(valor *2);
    /*nuevo->dato = cantMultiplo * 2;
    nuevo->sig = NULL;*/

    lista->sig = nuevo;
    crear(lista->sig, cantMultiplo,valor+1);
}

void PruebasListas() {
    NodoLista* lista = new NodoLista;
    /* NodoLista* aux = lista;*/

    /* for (int i = 1; i < 6; i++) {
         aux->sig = new NodoLista(i * 2);
         aux = aux->sig;
     }*/
    crear(lista, 3, 1);
    imprimir(lista);
    cout << endl;

    funcion1(lista, -1);
    funcion1(lista, 3);
    funcion1(lista, 5);

    imprimir(lista);
    cout << endl;
}

void PruebasArboles() {
    NodoAB* raiz = new NodoAB(1);

    raiz->izq = new NodoAB(10);
    raiz->der = new NodoAB(20);
    raiz->der->der = new NodoAB(30);

    cout << cantNodos(raiz) << endl; // == 4
    cout << altura(raiz) << endl; // == 3
}

int main()
{
    //PruebasListas();
    PruebasArboles();
}
