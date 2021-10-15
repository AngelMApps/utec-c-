#include <iostream>
using namespace std;

void showTable(int n){
    for (int i = n; i >=1; i--){
        for (int j = 0; j < i-1; j++)
        {
            cout <<"0 ";
        }
        for (int j = n; j>=i; j--)
        {
            cout << j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    unsigned short int n=0;
    cin >>n;
    for (int i = n; i >= 1; i--) {
		showTable(i);
		cout << endl;
	}
	
    return 0;
}