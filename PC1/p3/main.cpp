#include <iostream>
#include "p3.h"
using namespace std;
int main() {
    float r=0,p=0,cExcavacion=0,cRecubrimiento=0,cTotal=0;
    ingresarDatos(r,p);
    calculoCostos(r,p,cExcavacion,cRecubrimiento,cTotal);
    showResultados(cExcavacion,cRecubrimiento,cTotal);
    return 0;
}
