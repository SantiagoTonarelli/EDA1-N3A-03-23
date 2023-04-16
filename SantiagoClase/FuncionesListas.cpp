#include "FuncionesListas.h"

void imprimir(NodoLista* l) {
    if (l) {
        cout << l->dato << "; ";
        imprimir(l->sig);
    }
}

void funcion1(NodoLista*& l, int dato) {
    //CB 
    NodoLista* nuevo = new NodoLista;
    nuevo->dato = dato;
    nuevo->sig = NULL;

    if (l == NULL) {
        l = nuevo;
    }
    else if (dato < l->dato) {
        nuevo->sig = l;
        l = nuevo;
    }
    else {
        NodoLista* temp = l;
        while (temp->sig != NULL && dato > temp->sig->dato) {
            temp = temp->sig;
        }
        nuevo->sig = temp->sig;
        temp->sig = nuevo;
    }
}

void funcion2(NodoLista*& l, int dato, int pos) {
    NodoLista* nuevo = new NodoLista;
    nuevo->dato = dato;
    nuevo->sig = NULL;

    if (pos <= 0 || !l) {
        nuevo->sig = l;
        l = nuevo;
    }
    else {
        NodoLista* temp = l;
        int contador = 0;
        while (temp != NULL && contador < pos - 1) {
            temp = temp->sig;
            contador++;
        }
        if (temp != NULL) {
            nuevo->sig = temp->sig;
            temp->sig = nuevo;
        }
    }
}

void funcion3(NodoLista*& l, int pos) {
    if (l == NULL) {
        return;
    }
    else if (pos == 0) {
        NodoLista* temp = l;
        l = l->sig;
        delete temp;
    }
    else {
        NodoLista* temp = l;
        int contador = 0;
        while (temp->sig != NULL && contador < pos - 1) {
            temp = temp->sig;
            contador++;
        }
        if (temp->sig != NULL) {
            NodoLista* borrar = temp->sig;
            temp->sig = borrar->sig;
            delete borrar;
        }
    }
}