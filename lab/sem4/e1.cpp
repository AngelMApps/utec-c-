#include <iostream> 
#include <math.h> 
using namespace std; 
int main() { 
    //Varibles de entrada tolower(bebida)=='m'
    unsigned short personas; char bebida; 
    //Variables de salida 
    float mango=0., fresa=0., vainilla=0.; 
    float porcentajeMango=0., porcentajeFresa=0., porcentajeVainilla=0; 
    cout << "Encuesta Starbucks: \n"; 
    do{ 
        cout << "Cuantas personas haran la encuesta? (5-30)\n"; cin >> personas; 
    } while (personas < 5 || personas > 30); 
    for (auto i=1; i<=personas; i++){ 
        cout << "Encuesta No " << i << ": " << endl; 
        cout << "Que tipo de bebida prefiere (m-mango, f-fresa, v-vainilla)?\n"; 
        cin >> bebida; 
        while (bebida != 'm' && bebida != 'f' && bebida != 'v' && bebida != 'M' && bebida != 'F' && bebida != 'V'){ 
            cout << "No es bebida disponible." << endl; 
            cout << "Que tipo de bebida prefiere (m-mango, f-fresa, v-vainilla)?\n"; 
            cin >> bebida; 
        } 

        if (bebida == 'm' || bebida == 'M') mango++; 
        else if (bebida == 'f' || bebida == 'F') fresa++; 
        else vainilla++; 
    } 
    porcentajeMango = (mango/personas)*100; 
    porcentajeFresa = (fresa/personas)*100; 
    porcentajeVainilla = (vainilla/personas)*100; 
    cout << "El porcentaje que quiere mango es " << round(porcentajeMango) << "%" << endl;
    cout << "El porcentaje que quiere fresa es " << round(porcentajeFresa) << "%" << endl; 
    cout << "El porcentaje que quiere vainilla es "<< round(porcentajeVainilla) << "%" << endl; 
    return 0; 
}