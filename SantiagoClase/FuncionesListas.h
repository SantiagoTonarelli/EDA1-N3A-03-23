#pragma once

#include <iostream>
using namespace std;

struct NodoLista {
    int dato;
    NodoLista* sig;

    NodoLista() :dato(0), sig(NULL) {}
    NodoLista(int nuevoDato) : dato(nuevoDato), sig(NULL) {}
};

void imprimir(NodoLista* l);

void funcion1(NodoLista*& l, int dato);

void funcion2(NodoLista*& l, int dato, int pos);

void funcion3(NodoLista*& l, int pos); 
