#include <iostream>

using namespace std;
//retornar el valor entero y el valor decimal
int main(){
   double n;
   cin >> n;
   int pEntero = (int)n; 
   cout << "parte entera: "<<pEntero<<endl;
   cout << "parte Decimal: "<< n - pEntero<<endl;
   return 0;
}
