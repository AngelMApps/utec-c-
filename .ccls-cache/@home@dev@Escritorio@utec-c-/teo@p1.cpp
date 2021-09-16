//Desarrollar un codigo que identifique si un numero ingresado
//es par, impar o cero
//usamos la estructura de control selectiva IF

#include <iostream>
using namespace std;
int main(){
    int number=0;

    cout<<"ingrese un Numero: ";
    cin>>number;

    if(number %2==0 && number !=0){
        cout<<"el numero "<<number<<" es par\n";
    }else if (number%2!=0){
        cout<<"el numero "<<number<<" es impar\n";
    }else if (number==0){
        cout<<"el numero es cero\n";
    }
    return 0;
}
