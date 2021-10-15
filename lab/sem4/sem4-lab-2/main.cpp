#include "funciones.h"
int main() {
    char opcion = ' ';
    int ptosAzul=0, acumuladoAzul=0;
    int ptosRojo=0, acumuladoRojo=0;
    while (opcion != '4'){
        opcion = menu();
        switch (opcion) {
            case '1':
                ingresarPuntos("Ingrese puntos Equipo Azul: ", &ptosAzul);
                actualizaPuntos(&acumuladoAzul, &ptosAzul);
                break;
            case '2': ingresarPuntos("Ingrese puntos Equipo Rojo: ", &ptosRojo);
            actualizaPuntos(&acumuladoRojo, &ptosRojo);
            break;
        case '3':
            mostrarResultados(&acumuladoAzul, &acumuladoRojo);
            break;
        }
    }
    return 0;
}