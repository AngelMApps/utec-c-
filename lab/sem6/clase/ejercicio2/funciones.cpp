//
// Created by estan on 10/14/2021.
//
#include <iostream>
#include "funciones.h"

using namespace  std;

int ingresarCantidadAlumnos() {
    int alumnos = 0;
    do{
        cout << "Ingrese la cantidad de alumnos: ";
        cin >> alumnos;
    }while(alumnos < 15);
    return alumnos;
}

float *crearArregloDinamicoNotas(int alumnos) {
    return new float[alumnos]();
}

void ingresarNotas(float *pNotas, int alumnos) {
    for (auto i=0; i<alumnos; i++)
        pNotas[i] = ingresarNotaIndividual(i+1);
}

float ingresarNotaIndividual(int numeroAlumno) {
    float nota=0.0;
    do {
        cout << "Ingrese nota del alumno "<< numeroAlumno << ": ";
        cin >> nota;
    } while (nota <0 || nota > 20);
    return nota;
}

void calcularEstadisticos(float *pNotas, int alumnos, float &promedio, float &mayor, float &menor) {
    promedio = 0.0;
    mayor = pNotas[0];
    menor = pNotas[0];
    for (auto i=0; i<alumnos; i++){
        promedio += pNotas[i];
        mayor = max(mayor, pNotas[i]);
        menor = min(menor, pNotas[i]);
    }
    promedio = promedio/alumnos;
}

void mostrarEstadisticos(float promedio, float mayor, float menor) {
    cout << "Estadisticas de notas"<<endl;
    cout << "Promedio: "<< promedio <<endl;
    cout << "Mayor: "<< mayor <<endl;
    cout << "Menor: "<< menor <<endl;
}

void imprimirNotasEncimaPromedio(float *pNotas, int alumnos, float promedio) {
    cout << "Notas por encima del promedio"<<endl;
    for (auto i=0; i<alumnos; i++)
        if (pNotas[i] > promedio)
            cout << pNotas[i] <<endl;

}

void imprimirPromedioEliminandoMenor(float *pNotas, int alumnos, float menor) {
    float promedio=0.0;
    int totalNotas=0;
    for (auto i=0; i<alumnos; i++)
        if (pNotas[i] != menor){
            totalNotas++;
            promedio+=pNotas[i];
        }
    promedio = promedio / totalNotas;
    cout << "Promedio sin considerar la nota menor: "<<promedio<<endl;
}

void imprimirNotas(float *pNotas, int alumnos) {
    cout << "Notas ingresadas"<<endl;
    for (auto i=0; i<alumnos; i++)
        cout << pNotas[i] <<endl;
}
