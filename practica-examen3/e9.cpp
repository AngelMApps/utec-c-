#include <iostream>
using namespace std;

void decode(long int code, int &nTanques, string &sGranadas, int &nAviones, string &sBombas)
{
    for (char n:to_string(code))
    {
        if((n-'0')%2!=0){
            nTanques +=1;
            sGranadas+=n;
        }else{
            nAviones+=1;
            sBombas+=n;
        }
    }
    
}

int main()
{
    unsigned long int codigo = 0;
    int nTanques = 0, nAviones = 0;
    string sBombas = "", sGranadas = "";
    do
    {
        cout << "Numero de al menos 7 digitos: ";
        cin >> codigo;
    } while (to_string(codigo).size() < 7);
    decode(codigo, nTanques, sGranadas, nAviones, sBombas);
    cout<<"Clave descifrada\n";
    cout<<"Numero de tanques: "<<nTanques<<endl;
    cout<<"Secuencia de Granadas: "<<sGranadas<<endl;
    cout<<"Numero de Aviones: "<<nAviones<<endl;
    cout<<"Secuencia de Bombas: "<<sBombas<<endl;
    return 0;
}