#include <iostream>
#include "funciones.h"

int main() {
    int elementos = ingresarCantidadElementos();
    int* pDatos = crearArregloDatos(elementos);
    imprimirDatos(pDatos, elementos);
    int cantidadMultiplos5, cantidadMultiplos7;
    int* multiplos5 = crearSubArreglosMultiplos(pDatos, elementos, 5,cantidadMultiplos5);
    imprimirDatos(multiplos5, cantidadMultiplos5);

    int* multiplos7 = crearSubArreglosMultiplos(pDatos, elementos, 7,cantidadMultiplos7);
    imprimirDatos(multiplos7, cantidadMultiplos7);

    delete [] pDatos;
    delete [] multiplos5;
    delete [] multiplos7;
    return 0;
}
