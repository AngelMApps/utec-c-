#include <iostream>
#include "funciones.h"

int main() {
    float promedio=0.0, mayor=0.0, menor=0.0;
    int alumnos = ingresarCantidadAlumnos();
    float* pNotas = crearArregloDinamicoNotas(alumnos);
    ingresarNotas(pNotas, alumnos);
    imprimirNotas(pNotas, alumnos);
    calcularEstadisticos(pNotas, alumnos, promedio, mayor, menor  );
    mostrarEstadisticos(promedio, mayor, menor);
    imprimirNotasEncimaPromedio(pNotas, alumnos, promedio);
    imprimirPromedioEliminandoMenor(pNotas, alumnos, menor);
    delete [] pNotas;
    return 0;
}
