#include <iostream>
#include <string>
using namespace std;

int main(){
    char cadena[]={'A','B','C','D','E'};
    for(int i=0;i<5;i++){
        cout<< cadena[i] <<endl;
    }

    string cadena2="ABCDE";
    for(char i:cadena2){
        cout<< i <<endl;  
    }
    int a=2.323;
    double b=3;

    cout<<a<<","<<b<<endl;
}
