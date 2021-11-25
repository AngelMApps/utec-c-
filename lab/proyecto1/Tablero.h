#ifndef TABLERO_H
#define TABLERO_H
#include "Nave.h"
class Tablero{
    private:
        int dimension=11;
        int totalBalas;
        string** tablero;
    public:
        Tablero();
        Tablero(int totalBalas);
        int getDimension();
        void setTotalBalas(int totalBalas);
        int getTotalBalas();
        void crearTablero();
        void setTablero(string** tablero);
        string** getTablero();
        void agregarNave(Nave* nave);
        void imprimirMatriz();
        void liberarMatriz();
        virtual ~Tablero();
};


#endif //TABLERO_H
