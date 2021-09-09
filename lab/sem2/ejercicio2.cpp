#include <iostream>
using namespace std;

int main() {
    // Variables de entrada
    string zona = "", via = "", vehiculo = "";
    unsigned int velocidad = 0;
    // Variables de salida
    bool limiteNormal = false;

    // Ingreso de datos
    cout << "Control de velocidad" << endl;
    cout << "====================\n\n";
    // Ingresr y validar tipo de zona
    while (zona != "C" && zona != "U") {
        cout << "Ingrese tipo de zona [Urbana (U) o Carretera (C)] : ";
        cin >> zona;
    }

    // Ingresar y validar el tipo de via o tipo de carretera
    if (zona == "U") {
        do {
            cout << "Ingrese tipo de via [ Escolar (E), Calles o Jirones (C), Avenidas (A) o Via Expresa (V) ]: ";
            cin >> via;
        } while (via != "E" && via != "C" && via != "A" && via != "V");
    } else {
        do {
            cout<< "Ingrese tipo de vehiculo [De Carga (C), \nServicio publico de pasajeros (P), \nAutomoviles, camionetas o motocicletas (O)]: ";
            cin >> vehiculo;
        } while (vehiculo != "C" && vehiculo != "P" && vehiculo != "O");

    }
    
    cout<<"Ingrese la velocidad:\n";
    cin>>velocidad;

    limiteNormal = (zona == "U" && via=="E" && velocidad <= 30 ) ||
            (zona == "U" && via=="C" && velocidad <=40) ||
            (zona == "U" && via=="A" && velocidad <=60) ||
            (zona == "U" && via=="V" && velocidad <=80) ||
            (zona == "C" && vehiculo=="C" && velocidad <=80) ||
            (zona == "C" && vehiculo=="P" && velocidad <=90) ||
            (zona == "C" && vehiculo=="O" && velocidad <=100);
    if (limiteNormal)
        cout << "Velocidad dentro del limite"<<endl;
    else
        cout << "Velocidad fuera de los limites"<< endl;

    return 0;
}
