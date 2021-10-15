
#include "funciones.h"
#include <iostream>
using namespace std;
char menu() {
    char opcion = ' ';
    cout << "Menu\n";
    cout << "1. Ingrese puntaje equipo Azul.\n";
    cout << "2. Ingrese puntaje equipo Rojo.\n";
    cout << "3. Imprime puntajes.\n";
    cout << "4. Salir.\n";
    cout << "Elija la opcion que desee: ";
    cin >> opcion;
    return opcion;
}
void mostrarResultados(int *pAcumuladoAzul, int *pAcumuladoRojo){
    cout << "Puntaje del equipo Azul: "<< *pAcumuladoAzul << endl;
    cout << "Puntaje del equipo Rojo: "<< *pAcumuladoRojo << endl;
}
void ingresarPuntos(string etiqueta, int *pPuntos){
    cout << etiqueta << endl;
    cin >> *pPuntos;
}
void actualizaPuntos(int *pPuntosGrupo, int *puntos) {
    // int pPuntos
    *pPuntosGrupo = *pPuntosGrupo + *puntos;
}