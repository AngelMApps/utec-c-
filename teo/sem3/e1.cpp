#include <iostream>

using namespace std;
//Funciones

void intercambio(int a,int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"El nuevo valor de a: "<<a<<endl;
    cout<<"El nuevo valor de b: "<<b<<endl;
}
void incremento(){
}
int main(){
    int a=0,b=0;
    cout<<"Ingrese la primera variable a: ";
    cin>>a;
    cout<<"Ingrese la segunda variable b: ";
    cin>>b;
    intercambio(a,b);
    //incremento(a,b);
    return 0;
}


