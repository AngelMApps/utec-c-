#include <iostream>
using namespace std;

void ingresarNumeros(double *n1, double *n2){
    cout<<"Ingrese n1: ";
    cin>> *n1;
    cout<<"Ingrese n2: ";
    cin>> *n2;
}
void mostrarResultados(double n1, double n2){
    cout<<"suma: "<< n1 + n2<<endl;
    cout<<"resta: "<< n1 - n2<<endl;
    cout<<"multiplicacion: "<< n1 * n2<<endl;
    if(n2!=0) cout<<"resta: "<< n1 / n2<<endl;
}
int main() {
    double *n1;
    double *n2;
    //Reservar espacio en la  memoria dinamica(Heap)
    n1=new double;
    n2=new double;

    //Ingreso de datos usando el operador de referencia
    //Operacion de escritura en el espacio reservado
    ingresarNumeros(n1,n2);
    mostrarResultados( *n1,*n2 );
    
    delete n1;
    delete n2;
    return 0;
}