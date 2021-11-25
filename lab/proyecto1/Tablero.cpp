#include "Tablero.h"

Tablero::Tablero(int totalBalas){
    this->totalBalas=totalBalas;
}
int Tablero::getDimension(){
    return Tablero::dimension;
}
void Tablero::setTotalBalas(int totalBalas){
    Tablero::totalBalas=totalBalas;
}
int Tablero::getTotalBalas(){
    return Tablero::totalBalas;
}
void Tablero::setTablero(string** tablero) {
    Tablero::tablero=tablero;
}
void Tablero::crearTablero() {
    int n=Tablero::getDimension();
    char letras[10]={'A','B','C','D','E','F','G','H','I','J'};
    string** matriz = new string* [n]();
    for (int i = 0; i < n; i++){
        matriz[i]=new string[n]();
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i==0 && j>0){
                //string val=selectLetra(j);
                for (size_t i = 1; i < n; i++){
                    matriz[i][j]=letras[i-1];
                }
            }else if (i==0 && j==0){
                matriz[i][j]="  ";
            }else if(j==0 && i>0){
                matriz[i][j]= " "+to_string(i);
                if(i==10) matriz[i][j]= "10";
            }else{matriz[i][j]=" ";}
        }
    }
    Tablero::setTablero(matriz);
}
string** Tablero::getTablero(){
    return Tablero::tablero;
}
void Tablero::agregarNave(Nave* nave) {
    string** matriz=Tablero::getTablero();
    int i=1+rand()%10;
    int j=1+rand()%10;
    int selectVoH=0+rand()%2;
    if (selectVoH==0){
        nave->setDireccion('V');
        string s;
        s.push_back(nave->getName());
        if((i>=1&&i<=7) && matriz[i][j]==" "){
            for (int a = i; a <i+nave->getTamanio(); a++){
                matriz[a][j]=s;
            }
        }else if(i>11-nave->getTamanio() && matriz[i][j]==" "){
            int temp=10-i; 
            for (int a=i; a<=10; a++){
                matriz[a][j]=s;
            }
            temp=nave->getTamanio()-temp;
            for (int a=i-temp+1; a<i; a++){
                matriz[a][j]=s;
            }
        }
    }
    
    
}

void Tablero::imprimirMatriz(){
    
}

void Tablero::liberarMatriz(){
    string** matriz=Tablero::getTablero();
    int n=Tablero::getDimension();
    for (int i = 0; i < n; i++){
        delete [] matriz[i];
    }
    delete[] matriz;
    matriz = nullptr;
}
Tablero::~Tablero(){
    dimension=0;
    totalBalas=0;
    cout<<"Eliminado"<<endl;
}
