#include <iostream>
using namespace std;
int main(){
    char matrix[100][100];
    int filas=0,columnas=0;

    do{
        cout<<"Filas [mayor a 2]: ";
        cin>>filas;
    } while (filas<=2);
    
    do{
        cout<<"Columnas [mayor a 4]: ";
        cin>>columnas;
    } while (columnas<=4);
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas ; j++){
            if(i==0 || i==filas-1 || j==0 || j == columnas-1)
                matrix[i][j]='*';
            else matrix[i][j]='o';
        }
        
    }
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas ; j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }

    
    
    
    return 0;
}
