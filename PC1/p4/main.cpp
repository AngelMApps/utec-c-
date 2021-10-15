#include <iostream>
#include "p2.h"
using namespace std;
int main() {
    int n=0;
    do {
        cout<<"Decimal: ";
        cin>>n;
    } while (n<=0);
    binario(n);
    return 0;
}
