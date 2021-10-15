#include <iostream>
#include <cmath>

using namespace std;

bool esBisiesto(auto anio) {
    if (anio % 4 == 0)return true;
    else return false;
}

void contarDias(unsigned int dia, unsigned int mes, unsigned int anio, unsigned int *diasTranscurridos,
                unsigned int *diasParaAnioNuevo) {
    unsigned int cDia = 1;
    unsigned int cMes = 1;
    if (mes - cMes == 0) {
        *diasTranscurridos = dia - cDia;
    } else {

        for (auto i = 1; i <= mes; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                *diasTranscurridos += 31+(dia-1);
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                *diasTranscurridos += 30;
            } else {
                if (esBisiesto(i)) *diasTranscurridos += 29;
                else *diasTranscurridos += 28;
            }
        }
    }
}

int main() {
    unsigned int dia = 0, mes = 0, anio = 0;
    unsigned int diasTranscurridos = 0, diasParaAnioNuevo = 0;

    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;
    contarDias(dia, mes, anio, &diasTranscurridos, &diasParaAnioNuevo);
    cout << "Han transcurrido : " << diasTranscurridos << "\n";
    cout << "Faltan para anio Nuevo : " << diasParaAnioNuevo;

    return 0;
}
