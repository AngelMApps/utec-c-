//
// Created by estan on 10/14/2021.
//
#include <iostream>
#include "funciones.h"
#include<time.h>


using namespace std;

int ingresarCantidadElementos() {
    int elementos = 0;
    do{
        cout << "Ingrese la cantidad de elementos: ";
        cin >> elementos;
    }while(elementos < 1);
    return elementos;
}

int *crearArregloDatos(int elementos) {
    srand(time(NULL));
    int * pDatos  = new int[elementos]();
    for (int i = 0; i < elementos; i++)  {
        pDatos[i] = 0+rand()%(1000-1+0);
    }
    return pDatos;
}

void imprimirDatos(int *pDatos, int elementos) {
    cout << "Datos generados"<<endl;
    for (auto i=0; i<elementos; i++)
        cout << pDatos[i] <<endl;
}

int * crearSubArreglosMultiplos(int *pDatos, int elementos, int numero, int &cantidadMultiplos) {
    cantidadMultiplos =0;
    for (int i = 0; i < elementos; i++)
        if (pDatos[i] % numero == 0)
            cantidadMultiplos++;
    int * pMultiplos = new int[cantidadMultiplos]();
    int j=0;
    for (int i = 0; i < elementos; i++)
        if (pDatos[i] % numero == 0){
            pMultiplos[j]= pDatos[i];
            j++;
        }
    return pMultiplos;
}



