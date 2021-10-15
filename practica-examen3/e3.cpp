#include <iostream>
using namespace std;

string reemplazar_caracter(string texto,char adig,char ndig){
    string nTexto="";
    for (char l : texto)
    {
        
        if(l==adig){
            nTexto+=ndig;
        }else{
            nTexto+=l;
        }
    }
    return nTexto;
}
int main(){
    string texto;
    char adig=' ',ndig=' ';
    getline(cin,texto);
    cin>>adig;
    cin>>ndig;
    cout<<texto<<endl;
    cout<<endl;
    cout<<reemplazar_caracter(texto,adig,ndig)<<endl;
    return 0;
}
