#include <iostream>
using namespace std;

bool nPrimo(int num){
    if (num == 0 || num == 1)
        return false;
    for (int i = 2; i < num / 2; i++){
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(){
    int number = 0,Mprimo = 0,mprimo = 0;
    do{
        cout << "ingrese un numero entero mayor 10: ";
        cin >> number;
    } while (number <= 10);
    for (int i = number + 1; !Mprimo; i++){
            if (nPrimo(i)) Mprimo = i;
        }
        for (int i = number - 1; !mprimo; i--){
            if (nPrimo(i)) mprimo = i;
        }
        cout << "el siguiente numero primo es: " << Mprimo << endl;
        cout << "el anterior numero primo es:  " << mprimo << endl;
    return 0;
}
