#include <iostream>

using namespace std;

int main(){
    double cInicial=0,cFinal=0;
    double iSemanal=0,iMensual=0;
    double tSemanal=0,tMensual=0;
    int semanas=1;
    int meses=1;
    
    cout<<"Ingrese el capital Inicial: ";
    cin>>cInicial;
    cout<<"Ingrese el capital Final: ";
    cin>>cFinal;
    cout<<"Ingrese el interes Semanal: ";
    cin>>iSemanal;
    cout<<"Ingrese el interes Mensual: ";
    cin>>iMensual; 
    tSemanal = cInicial*(1+iSemanal/5200); 
    tMensual = cInicial*(1+iMensual/1200);
    while (cInicial != cFinal){
        cInicial=tSemanal;
        tSemanal= cInicial*(1+iSemanal/5200);
        semanas++;
        cout<<"La cantidad de semanas necesarias para lograr el capital deseado es: "<<semanas<<endl;
    }
    while (cInicial != cFinal){
        cInicial=tMensual;
        tMensual= cInicial*(1+iMensual/1200);
        meses++;
        cout<<"La cantidad de meses necesarios para lograr el capital deseado es: "<<meses<<endl;
    }
    
}
