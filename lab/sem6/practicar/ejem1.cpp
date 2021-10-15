#include <iostream>

using namespace std;
//Desarrolla un programa que permita leer dos números de tipo double, 
//se almacenen utilizando memoria dinámica y luego halle la suma, 
//la diferencia y el producto de estos números.

int main(){
    double *x=new double,*y=new double;
    cout<<"Ingrese x: ";
    cin>>*x;
    cout<<"Ingrese y: ";
    cin>>*y;
    cout<<"suma: "<<*x+*y<<endl;
    cout<<"resta: "<<*x-*y<<endl;
    cout<<"producto: "<<* x* *y<<endl;

    delete x;
    delete y;
    return 0;
}