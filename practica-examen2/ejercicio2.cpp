//
// Created by dev on 1/10/21.
//
#include <iostream>
#include <cmath>
using namespace std;

bool esTriangular(int n){
    double r= sqrt(8*n+1);
    if ((r - (int)r)>0) return false;
    else return true;
}
int main(){
    int number=0;
    cin>>number;
    if(esTriangular(number)) cout<<"triangular"<<endl;
    else cout<<"no triangular";
    return 0;
}
