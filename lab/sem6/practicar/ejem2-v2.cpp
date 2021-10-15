#include <iostream>
using namespace std;

void intercambiar(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int *x, *y;
    x=new int();
    y=new int();
    cout << "Ingrese 1er Valor: ";
    cin>>*x;
    cout << "Ingrese 2do Valor: ";
    cin>>*y;
    intercambiar(x,y);
    cout << "1er valor es "<<*x<<endl;
    cout << "2do valor es "<<*y<<endl;
    return 0;
}