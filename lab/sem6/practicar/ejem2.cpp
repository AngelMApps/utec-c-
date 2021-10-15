#include <iostream>
using namespace std;

void intercambiar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=0,b=0;
    cout << "Ingrese 1er Valor: ";
    cin>>a;
    cout << "Ingrese 2do Valor: ";
    cin>>b;
    intercambiar(a,b);
    cout << "1er valor es "<<a<<endl;
    cout << "2do valor es "<<b<<endl;
    return 0;
}