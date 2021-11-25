#ifndef NAVE_H
#define NAVE_H
#include <iostream>
using namespace std;
class Nave{
    private:
        char direccion;
        int tamanio;
        char name;
    public:
        Nave();
        Nave(int tamanio,char name);
        void setDireccion(char direccion);
        char getDireccion();
        int getTamanio();
        char getName();
        virtual ~Nave();
};
#endif //NAVE_H