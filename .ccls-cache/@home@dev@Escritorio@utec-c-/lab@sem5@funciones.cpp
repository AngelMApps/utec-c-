#include "funciones.h"
#include <iostream>
using namespace std;
int invertirMunero(int numero){
    int result=0;
    while(numero!=0){
        result=result*10+numero%10;
        numero = numero/10;        
    }
    return result;
}

bool esCapicua(int numero){
    return numero==invertirMunero(numero);
}

void MostrarCapicuas(int desde,int hasta){
    for(auto i=desde;i<=hasta;i++){
        if(esCapicua(i)) cout<<i<<endl;
    }
}

void ingresarRango(int &desde, int&hasta){
    cout<<"Ingrese rango Inicial: ";
    cin>>desde;
    cout<<"Ingrese rango final: ";
    cin>>hasta;   
}
