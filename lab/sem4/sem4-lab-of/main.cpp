#include <iostream>
#include "funciones.h"
using namespace std;
int main() {
    float nota=0.0,adicional=0.0;
    ingresarInformacion(nota,adicional);
    corregirNota(&nota,adicional);
    mostrarNota(nota);
    return 0;
}
