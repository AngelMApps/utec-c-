#include <iostream>
using namespace std;

void ingresarAlumnos(int &alumnos){
    do
    {
        cout<<"Ingrese la cantidad de Alumnos: ";
        cin>>alumnos;
    } while(alumnos<15);
}
void crearArray(int n,float *pNotas){
    pNotas=new float[n]();
}
void ingresarNotas(int n,float *pNotas){
    double nota=-1.0;
    for (size_t i = 0; i < n; i++){
        do{
            cout<<"Ingrese Nota "<<i+1<<": ";
            cin>>nota;
        } while(nota<0||nota>20);
        pNotas[i]=nota;
    }
}
bool promedio(int n,float *pNotas,float nota){
    float sumNota=0;
    for (size_t i = 0; i < n; i++)
    {
        sumNota+=pNotas[i];
    }
    float nPromedio=sumNota/n;
    cout<<"Promedio: "<<nPromedio;
    if(nota>nPromedio) return true;
    else return false;
}
void mostrarNotas(int n,float *pNotas){
    for (size_t i = 0; i < n; i++)
    {
        if(promedio(n,pNotas,pNotas[i]))
            cout<<"nOTAS: "<<pNotas[i]<<" ";
    }
}

int main()
{

    int alumnos=0;
    float *pNotas;
    ingresarAlumnos(alumnos);
    crearArray(alumnos,pNotas);
    ingresarNotas(alumnos,pNotas);
    mostrarNotas(alumnos,pNotas);
    return 0;
}