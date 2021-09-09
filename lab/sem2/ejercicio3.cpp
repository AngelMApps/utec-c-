#include <iostream>
#include <string>

using namespace std;

int main(){
    string letra="";
    int numero=0;

    do{
        cout<<"ingrese una letra desde la A hasta la  G: ";
        cin >> letra;
    }while(letra>"G");
    do{
        cout<<"ingrese una numero del 1 al 8: ";
        cin >> numero;
    }while(numero==0 && numero >8);
    
    if (letra=="A"||letra=="C"||letra=="E"||letra=="G"){
        if (numero%2 !=0){
            cout<<"El color es Negro\n"; 
        }else{
            cout<<"El color es Blanco\n";
        }
    }
    else{
        if (numero%2 !=0){
            cout<<"El color es Blanco\n"; 
        }else{
            cout<<"El color es Negro\n";
        }
    }
}
