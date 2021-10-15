#include <iostream>
using namespace std;

int main()
{
    int cDias=0,dFrio=0,dTemplado=0,dCaluroso=0,temperatura=0;
    int tSum=0.0;
    int tMaxima=0;
    cout<<"Numero de dias: ";
    cin>>cDias;
    for (int i = 0; i <cDias; i++)
    {
        cout<<"Temperatura del dia "<<i+1<<": ";
        cin>>temperatura;
        if(tMaxima<temperatura) tMaxima=temperatura;
        tSum+=temperatura;
        if(temperatura<16) dFrio+=1;
        else if(temperatura>15 && temperatura<22) dTemplado+=1;
        else dCaluroso+=1;
    }

    cout<<"Reporte\n";
    cout<<"Temperatura Promedio: "<<double(tSum)/cDias<<endl;
    cout<<"Temperatura Maxima: "<<tMaxima<<endl;
    cout<<"Dias Frios[temp menor a 16 grados]: "<<dFrio<<endl;
    cout<<"Dias Templados[temp>15 - 21 grados]: "<<dTemplado<<endl;
    cout<<"Dias Calurosos[temp mayor a 21]: "<<dCaluroso<<endl;
    return 0;
}