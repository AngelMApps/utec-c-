#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <vector>
#include "Nave.h"
using namespace std;
string** crearMatriz();
string selectLetra(int i);
char selectVoH();
vector<Nave*> crearFlota();
void agregarFlota(string** matriz,Nave *nave);
void imprimirMatriz(string** matriz);
void liberarMatriz(string** matriz);
#endif //FUNCIONES_H