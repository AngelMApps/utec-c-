#include <iostream>
using namespace std;

int main(){
    //variables de entrada
    int numero;
    //variables de salida
    unsigned int total =0,pares=0;

    do{
        //ingreso de numero
        cout<<"ingrese un numero (0 para terminar): ";
        cin >> numero;
        if (numero){
            if(!(numero%2)){
                pares++;
            }
            total++;
        }
    }while(numero);
    cout<<"Total de Numeros ingresados: "<< total << endl;
    cout<<"Total de Pares: "<< pares << endl;
    cout<<"Total de Impares: "<< total - pares << endl;
    return 0;
}
