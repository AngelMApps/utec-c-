//
// Created by dev on 5/10/21.
//
#include <iostream>
#include "p1.h"

using namespace std;
void ingresarNotas(string &notas) {
    char nota1=' ',nota2=' ',nota3=' ',nota4=' ',nota5=' ';
    cout<<"Resultado\n";
    do {
    cout<<"Evaluacion Cualitativa .1"<<endl;
    cin>>nota1;
    }while(toupper(nota1)!='A'&&toupper(nota1)!='B'&&toupper(nota1)!='C'&&toupper(nota1)!='D');
    notas+=nota1;
    do {
        cout<<"Evaluacion Cualitativa .2"<<endl;
        cin>>nota2;
    }while(toupper(nota2)!='A'&&toupper(nota2)!='B'&&toupper(nota2)!='C'&&toupper(nota2)!='D');
    notas+=nota2;
    do {
        cout<<"Evaluacion Cualitativa .3"<<endl;
        cin>>nota3;
    }while(toupper(nota3)!='A'&&toupper(nota3)!='B'&&toupper(nota3)!='C'&&toupper(nota3)!='D');
    notas+=nota3;
    do {
        cout<<"Evaluacion Cualitativa .4"<<endl;
        cin>>nota4;
    }while(toupper(nota4)!='A'&&toupper(nota4)!='B'&&toupper(nota4)!='C'&&toupper(nota4)!='D');
    notas+=nota4;
    do {
        cout<<"Evaluacion Cualitativa .5"<<endl;
        cin>>nota5;
    }while(toupper(nota5)!='A'&&toupper(nota5)!='B'&&toupper(nota5)!='C'&&toupper(nota5)!='D');
    notas+=nota5;
   /*
       if(nota=='A'||nota=='B'||nota=='C'||nota=='D'){
           cout<<"Evaluacion Cualitativa ."<<i<<endl;
           cin>>nota;
           i++;
           switch (nota) {
               case 'A':
                   notas+='5';
                   break;
               case 'B':
                   notas+='4';
                   break;
               case 'C':
                   notas+='3';
                   break;
               case 'D':
                   notas+='2';
                   break;
           }
       }else{
           cout<<"Evaluacion Cualitativa ."<<i<<endl;
       }*/

}

void eliminarNota(string &notas) {
    char mNota='0';
    string newNotas="";
    for (char n:notas) {
        if(mNota<n) {
            mNota=n;
        }
    }
}

void cambiarNota(string &notas) {
    string nNotas="";

    for(auto n:notas){
        if(toupper(n)=='A') nNotas+='5';
        else if(toupper(n)=='B') nNotas+='4';
        else if(toupper(n)=='C') nNotas+='3';
        else if(toupper(n)=='D') nNotas+='2';
    }
    notas=nNotas;
}
