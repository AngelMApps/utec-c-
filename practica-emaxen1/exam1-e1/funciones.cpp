//
// Created by dev on 30/09/21.
//
#include <iostream>
#include "funciones.h"
using namespace std;
void ingresarNumero(int &num) {
    do {
        cout<<"Numero >= 11: ";
        cin>>num;
    }while(num<11);
}

void digitosDobles(int n) {
    int nSame=0;
    string nValue= to_string(n);
    char temp;
    for(int i=0;i<=nValue.size();i++){
        temp = nValue[0];
        if(temp==nValue[i]){
            nSame++;
        }
    }
    if (nSame==nValue.size()) cout<<nValue<<endl;
}
