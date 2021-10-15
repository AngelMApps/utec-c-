#include <iostream>
using namespace std;

void miscelaneos(int d,int m, unsigned int &tuNumero, string &tuPiedra){
    string number=to_string(d)+to_string(m);
    for (char n : number){
        tuNumero+=n-'0';
    }
    if((m>=1&&m<=4)){
        if(d%2==0) tuPiedra="Esmeralda";
        else tuPiedra="Zafiro";
    } else if((m>=5&&m<=8)){
        if(d%2==0) tuPiedra="Rubi";
        else tuPiedra="Topacio";
    }else{
        if(d%2==0) tuPiedra="Amatista";
        else tuPiedra="Jade";
    }
    
}

int main()
{
    unsigned int dia = 0, mes = 0, tuNumero = 0;
    string tuPiedra;
    cout<<"Dia :";
    cin>>dia;
    cout<<"Mes :";
    cin>>mes;
    miscelaneos(dia, mes, tuNumero, tuPiedra);
    cout<<"Tu numero es: "<<tuNumero<<"\n";
    cout<<"Tu piedra preciosa es: "<<tuPiedra<<endl;
    return 0;
}