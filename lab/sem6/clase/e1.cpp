#include <iostream>

using namespace std;

int main()
{
    int* pInt;
    int A[7] = {71, 72, 73, 74, 75, 76, 77};

    //--- se recorre el array y se imprimen los datos
    for (int i = 0; i < 7; i++)
        cout << "A[" << i << "]=" << A[i] << "\n";

    //-- se imprimen las direcciones donde se encuentra cada elemento
    cout << "\nInicio del array " << A << "\n";

    cout << "\nImprimimos las direcciones de cada casillero del Arreglo A\n";
        for (int i = 0; i < 7; i++)
            cout<< "&A[" << i << "]= " << &A[i] << "  Guarda el " << A[i] << "\n";
    pInt =A;
    for (auto i = 0; i < 7; i++)
    {
        cout<<*pInt++<<endl;
    }
    
    return 0;
}