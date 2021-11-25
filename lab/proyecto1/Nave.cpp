#include "Nave.h"

Nave::Nave(int tamanio, char name){
    this->tamanio=tamanio;
    this->name=name;
}

void Nave::setDireccion(char direccion) {
    this->direccion=direccion;
}

char Nave::getDireccion() {
    return Nave::direccion;
}

int Nave::getTamanio() {
    return Nave::tamanio;
}

char Nave::getName() {
    return Nave::name;
}

Nave::~Nave() {
    direccion=' ';
    tamanio=0;
    name=' ';
}