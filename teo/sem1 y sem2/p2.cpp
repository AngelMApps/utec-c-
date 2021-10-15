#include <iostream>
using namespace std;

int main(){
    int number=0;
    cout<<"ingrese un Numero entero entre 1 al 4: ";
    cin>>number;
    
    //necesita como argumento el parametro de comparacion
    switch(number){
        case 1: 
            cout<<"Primavera\n";
            break;
        case 2: 
            cout<<"Verano\n";
            break;
        case 3: 
            cout<<"Otono\n";
            break;
        case 4: 
            cout<<"Invierno\n";
            break;
        default:
            cout<<"el numero no corresponde \n";
    }
}
