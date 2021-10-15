#include <iostream>
using namespace std;
int main(){
    unsigned short int n=0;
    cin>>n;
    int l=0,r=n-1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==0||i==n-1||j==l||j==r) cout<<'*';
            else cout<<' ';
        }
        r--;l++;
        cout<<endl;
    }
    return 0;
}
