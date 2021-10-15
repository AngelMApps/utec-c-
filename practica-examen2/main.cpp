#include <iostream>
#include <cmath>
using namespace std;

void ingresarValores(double &a,double &b, double &c){
    cin>>a;
    cin>>b;
    cin>>c;
}
void ecuacionCuadratica(double &a,double &b,double&c,double &x1,double &x2){
    double b2=pow(b,2);
    x1=(-b + sqrt(b2-(4*a*c)))/2*a;
    x2=(-b - sqrt(b2-(4*a*c)))/2*a;
}
void mostrarRaices(double x1,double x2){
    if (x1>=x2) cout<<x1<<endl;
    else if(x2>=x1) cout<<x2<<endl;
    else cout<<"”no hay raıces reales”"<<endl;
}
int main() {
    double a=0,b=0,c=0,x1=0,x2=0;
    ingresarValores(a,b,c);
    ecuacionCuadratica(a,b,c,x1,x2);
    mostrarRaices(x1,x2);
    return 0;
}
