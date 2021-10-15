#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variable puntero a int
    //p esta en el stack
    int *p;
    //reservando la memoria para un arreglo dinamico de tamano
    //los elemetos reservados estan en el heap
    p = new int[5];
    //Acceso de escritura a los elementos reservados
    //a traves de [] que actuaq como un deferenciador
    for (size_t i = 0; i < 5; i++)
        p[i] = i * 10;

    //acceso de lectura a los elementios reservados a traves de
    //[]
    for (auto i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }

    //Acceso de escritura a los elementos reservados
    //a traves de [] que actuaq como un deferenciador
    int *pAux=p;
    for (auto i = 0; i < 5; i++){
        *pAux = *pAux+5;
        pAux++;
    }


    //acceso de lectura a los elementios reservados a traves de
    //*(dereferencia)
    pAux=p;
    for (auto i = 0; i < 5; i++)
    {
        cout<<*pAux++<<endl;
    }


    //--- Si ya no se va a utilizar se libera la memoria
    delete[] p;
    p = nullptr;

    return 0;
}