#include <iostream>
using namespace std;

bool nPerfecto(int num){
    int res=0;
    for (int i = 1; i <=num-1; i++){
        if(num%i==0){
            res+=i;
        }
    }
    if (res == num) return true;
    else return false;
} 
int main() {
    int number=0;
    do{
        cout<<"Numero: ";
        cin>>number;
    } while(number<1||number>9000);
    
    for (int i = number; i >=1; i--){
        if(nPerfecto(i)){
            cout<<i<<endl;
        }
    }
    cout<<"Eso es todo"<<endl;
    return 0;
}