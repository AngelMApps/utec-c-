#include "funciones.h"
#include <iostream>
using namespace std;

void ingresarDatos(int *n1, int *n2){
    cout<<"ingresar primer numero: ";
    cin>>*n1;
    cout<<"ingresar segundo numero: ";
    cin>>*n2;
}
void mostrarDatos(int n1, int n2){
    cout<<"Primer Numero: "<<n1<<endl;
    cout<<"Segundo Numero: "<<n2<<endl;
}
void intercambiarDatos(int *n1, int *n2){
    int aux=*n1;
    *n1=*n2;
    *n2=aux;
}
void intercambiarDatos2(int *&pn1, int *&pn2){
    int *tmp=pn1;
    pn1=pn2;
    pn2=tmp;
}