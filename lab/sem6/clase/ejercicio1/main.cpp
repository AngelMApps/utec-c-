#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int n1, n2;
    cout<<"Solucion con variables estqaticas"<<endl;
    ingresarDatos(&n1,&n2);
    mostrarDatos(n1,n2);
    intercambiarDatos(&n1,&n2);
    mostrarDatos(n1,n2);


    //Declaracion
    int *pn1,*pn2;
    //reserva
    pn1=new int;
    pn2=new int;
    //usar
    cout<<"Solucion con variables puntero"<<endl;
    ingresarDatos(pn1,pn2);
    mostrarDatos(*pn1,*pn2);
    intercambiarDatos2(pn1,pn2);
    mostrarDatos(*pn1,*pn2);
    //liberar
    delete pn1;
    delete pn2;

    return 0;
}