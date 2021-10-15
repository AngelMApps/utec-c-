//
// Created by estan on 10/14/2021.
//

#ifndef LAB019_FUNCIONES_H
#define LAB019_FUNCIONES_H

int ingresarCantidadAlumnos();
float * crearArregloDinamicoNotas(int alumnos);
void ingresarNotas(float *pNotas, int alumnos);
float ingresarNotaIndividual(int numeroAlumno);
void imprimirNotas(float *pNotas, int alumnos);
void calcularEstadisticos(float *pNotas, int alumnos, float &promedio, float &mayor, float &menor);
void mostrarEstadisticos(float promedio, float mayor, float menor);
void imprimirNotasEncimaPromedio(float *pNotas, int alumnos, float promedio);
void imprimirPromedioEliminandoMenor(float *pNotas, int alumnos, float menor);

#endif //LAB019_FUNCIONES_H
