#include <iostream>
using namespace std;
int main() {
    double promedio=0,nota=0;
    int aprobados=0;
    int cAlumnos=0;
    cout<<"ingrese cantidad de alumnos: ";
    cin>> cAlumnos;
    for (int i = 0; i < cAlumnos; i++){
        cout<<"Ingrese las notas del alumno "<<i+1<<": ";
        cin>> nota;

        if (nota>=10.5) aprobados++;
        promedio += nota;    
    }
    promedio/=cAlumnos;
    cout<< "Aprobados: " <<aprobados<<endl;
    cout<< "Promedio: " <<promedio<<endl;
    return 0;
}



