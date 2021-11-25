#include "funciones.h"

string selectLetra(int i){
    string res=" ";
    switch(i){
        case 1:
            res="A";
            break;
        case 2:
            res="B";
            break;
        case 3:
            res="C";
            break;
        case 4:
            res="D";
            break;
        case 5:
            res="E";
            break;
        case 6:
            res="F";
            break;
        case 7:
            res="G";
            break;
        case 8:
            res="H";
            break;
        case 9:
            res="I";
            break;
        case 10:
            res="J";
            break;
    }
    return res;
}

char selectVoH(){
    int res=0+rand()%2;
    if(res==0) return 'V';
    else return 'V';
}

string** crearMatriz(){
    int n=11;
    string** matriz = new string* [n]();
    for (int i = 0; i < n; i++){
        matriz[i]=new string[n]();
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i==0 && j>0){
                string val=selectLetra(j);
                matriz[i][j]=val;
            }else if (i==0 && j==0){
                matriz[i][j]="  ";
            }else if(j==0 && i>0){
                matriz[i][j]= " "+to_string(i);
                if(i==10) matriz[i][j]= "10";
            }else{matriz[i][j]=" ";}
        }
    }
    return matriz;
}
vector<Nave*> crearFlota() {
    vector<Nave*> res;
    return res;
}
void agregarFlota(string** matriz,Nave *nave){
    int i=1+rand()%10;
    int j=1+rand()%10;
    
    if (selectVoH()=='V'){
        cout<<"=================\n";
        cout<<selectVoH()<<endl;
        cout<<i<<endl;
        cout<<j<<endl;
        cout<<"=================\n";
        nave->setDireccion('V');
        string s;
        s.push_back(nave->getName());
        if((i>=1&&i<=7) && matriz[i][j]==" "){
            for (int a = i; a <i+nave->getTamanio(); a++){
                matriz[a][j]=s;
            }
        }else if(i>11-nave->getTamanio() && matriz[i][j]==" "){
            int temp=10-i; //10-8=2
            for (int a=i; a<=10; a++){
                matriz[a][j]=s;
            }
            temp=nave->getTamanio()-temp;//temp=4-2=2
            for (int a=i-temp+1; a<i; a++){//a=8-2=6+1
                matriz[a][j]=s;
            }
        }
    }
}


void imprimirMatriz(string** matriz){
    int n=11;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){        
            cout<<" "<<matriz[i][j];
        }
        cout<<endl;
    }
}


void liberarMatriz(string** matriz){ 
    int n=11;
    for (int i = 0; i < n; i++){
        delete [] matriz[i];
    }
    delete[] matriz;
    matriz = nullptr;
}