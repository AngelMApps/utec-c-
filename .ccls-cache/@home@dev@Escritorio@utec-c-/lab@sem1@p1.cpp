#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Hello world"<< endl;
    cout << "ingrese su edad: ";
    cin >> edad;
    if (edad<18)
        cout << "eres menor de edad, aun no puedes votar";
    else
        cout<<"Eres mayor de edad, a puedes votar"<<endl;
    return 0;
}
