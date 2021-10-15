//
// Created by dev on 28/09/21.
//
#include <iostream>
#include "funciones.h"
using namespace std;
void ingresarInformacion(float &nota, float &extras) {
    cout<<"Ingrese nota: ";
    cin>>nota;
    cout<<"Ingrese extras: ";
    cin>>extras;
}

void corregirNota(float *pNota, float extras) {
    *pNota+=extras;
}

void mostrarNota(float nota) {
    cout<<"La nueva nota es: "<<nota<<endl;
}
