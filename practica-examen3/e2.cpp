#include <iostream>
using namespace std;

string pGrande(string texto,short int n){
    string nFinal;
    int pMax=0;
    for (int i = 0; i < texto.size()-n; i++)
    {
        string aux;
        int auxProduct=1;
        for (int j = 0; j < n; j++)
        {
            aux += texto[j+i];
            auxProduct *= (texto[j+i]-'0');
        }
        if(pMax<auxProduct){
            nFinal=aux;
            pMax=auxProduct;
        }
    }
    return nFinal;
}

int main(){
    string numbers="";
    int n;
    cin>>numbers;
    cin>>n;
    cout<<pGrande(numbers,n)<<endl;
    return 0;
}
