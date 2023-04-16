#include <iostream>
#include "FuncionesListas.h"

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


int main()
{
    NodoLista* lista = new NodoLista;
   /* NodoLista* aux = lista;*/

   /* for (int i = 1; i < 6; i++) {
        aux->sig = new NodoLista(i * 2);
        aux = aux->sig;
    }*/
    crear(lista, 3,1);
    imprimir(lista);
    cout << endl;

    funcion1(lista, -1);
    funcion1(lista, 3);
    funcion1(lista, 5);

    imprimir(lista);
    cout << endl;
}
