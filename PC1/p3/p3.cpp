//
// Created by dev on 5/10/21.
//

#include "p3.h"
#include <iostream>
using namespace std;
void ingresarDatos(float &r, float &p) {
    cout<<"Construccion de Piscina"<<endl;

    do {
        cout<<"Profundidad: ";
        cin>>p;
    }while(p<=0);
    do {
        cout<<"Radio: ";
        cin>>r;
    }while(r<=0);

}

void showResultados(float cExcavacion, float cRecubrimiento, float cTotal) {
    cout<<"Costos(S/.)\n";
    cout<<"Excavacion: "<<cExcavacion<<endl;
    cout<<"Recubrimiento: "<<cRecubrimiento<<endl;
    cout<<"Total: "<<cTotal<<endl;
}

void calculoCostos(float r, float p, float &cExcavacion, float &cRecubrimiento, float &cTotal) {
    double vol = (3.14)*p*r*r;
    double area = (2*3.14*5*2)+(3.14*5*5);

    cExcavacion=vol*100;
    cRecubrimiento=area*150;
    cTotal=cExcavacion+cRecubrimiento;
}


