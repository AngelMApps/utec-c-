#include <iostream>

using namespace std;

/* long factorial(int n){
    int fact=1;
    for (int i=2;i<=n;i++) fact*=i;
    return fact;
}*/
//RECURSIVIDAD
long factorial(int n ){
    if (n<=1) return 1;

    return (n*factorial(n-1));
}
int main(){
    int n=0;
    cout<<"Ingrese un entero: "<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
}
