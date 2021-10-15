#include <iostream>

using namespace std;

int main(){
    double cInicial=0;
    double cFinal=0;
    double iAnual=0;
    double temp=0;
    int years=1;
    cout<<"Ingrese el capital Inicial: ";
    cin>>cInicial;
    cout<<"Ingrese el capital Final: ";
    cin>>cFinal;
    cout<<"Ingrese el interes Anual: ";
    cin>>iAnual;
    
    temp= cInicial*(1+iAnual/100);
    
    while (temp != cFinal){
        cInicial=temp;
        temp= cInicial*(1+iAnual/100);
        years++;
    }
    cout<<"La cantidad de anos necesarios para lograr el capital desado es: "<<years<<endl;

    //FORMULA
    //cFinal=cInicial*(1+ianual/100)
}
