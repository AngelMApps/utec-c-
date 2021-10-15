#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int litros=0;
    cout<<"ingrese la cantidad de litros: ";
    cin>>litros;
    int cajas=floor(litros/24.);
    cout<<"Camiones requeridos: "<<ceil(cajas/70.)<<endl;
    cout<<"Cajas requeridas: "<<cajas<<endl;
    cout<<"Botellas no despachadas: "<<litros-(cajas*24)<<endl;
    return 0;
}
