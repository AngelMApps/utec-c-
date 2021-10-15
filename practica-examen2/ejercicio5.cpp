#include <iostream>
#include <iomanip>
using namespace std;
void paintABCDEspada(int n){
    string alfabeto="ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
    for (int i=0;i<n;i++){
        cout<<setw(n-i);
        for(int j=0;j<=i;j++){
            cout<<alfabeto[j]<<' ';
        }
        cout<<setw(n-i);
        cout<<endl;
    }
    for (int i=n-1;i>=0;i--){
        cout<<setw(n-i+1);
        for(int j=0;j<=i-1;j++){
            cout<<alfabeto[j]<<' ';
        }
        cout<<setw(n-i+1);
        cout<<endl;
    }

}
int main(){
    int n=0;
    cin>>n;
    if (n>29) cout<<"ERROR"<<endl;
    else paintABCDEspada(n);
}


