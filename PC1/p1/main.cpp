#include <iostream>
#include "p1.h"
using namespace std;
int main() {
    int promedio=0;
    string notas="";
    ingresarNotas(notas);
    cambiarNota(notas);
    cout<<notas<<endl;
    return 0;
}
