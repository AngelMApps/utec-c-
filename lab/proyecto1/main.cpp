#include "Nave.h"
#include "Tablero.h"
int main(){
    srand(time(NULL));
    Tablero *primerTablero =new Tablero(100);
    Nave *nave1=new Nave(4,'A');
    primerTablero->crearTablero();
    primerTablero->agregarNave(nave1);
    primerTablero->liberarMatriz();
    return 0;
}