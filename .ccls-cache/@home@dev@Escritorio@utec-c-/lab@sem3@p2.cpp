#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int numero=0;
    int tamano=0,pares=0,impares=0;
    // -10 -10 3
    do{
        cout<<"ingrese un numero";
        cin>>numero;
        if(numero<0){
            numero*-1;
        }
        tamano = to_string(numero).length();

        for (int i=0; i<=tamano;i++){
            string n_num=to_string(numero);
            int dig=atoi(n_num.c_str());
            cout<<dig<<endl;
            if (!(dig%2)){
                pares++;
            }else{
                impares++;
            }

        }
    }while(tamano<=3);
    cout<<"total"<<tamano<<endl;
    cout<<"pares"<<pares<<endl;
    cout<<"impares"<<impares<<endl;
    return 0;
}
