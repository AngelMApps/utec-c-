#include <iostream>
using namespace  std;

char Menu(){
    char opcion = ' ';
    cout << "Elija una opcion" <<endl;
    cout << "[S] Sumar"<<endl;
    cout << "[R] Restar"<<endl;
    cout << "[M] Media Aritmetica"<<endl;
    cout << "[X] Salir"<<endl;
    do{
        cout << "Opcion: ";
        cin >> opcion;
        opcion = toupper(opcion);
    }while (opcion !='S' && opcion !='R' && opcion !='M' && opcion !='X' );
    return opcion;
}
void IngresarEnteroPositivo(string etiqueta,  int & numero){
    do {
        cout << etiqueta;
        cin >> numero;
    } while (numero<=0);
}
void IngresarDatos(int &n1, int &n2){
    IngresarEnteroPositivo("Ingresar Primero Numero: ", n1);
    IngresarEnteroPositivo("Ingresar Segundo Numero: ", n2);
}

float RealizarOperacion(char operacion, int n1, int n2){
    switch (operacion) {
        case 'S':
            return n1 + n2;
            break;
        case 'R':
            return  n1 - n2;
            break;
        case 'M':
            return (n1 + n2) / 2.0;
    }
}

void MostrarResultado(float resultado){
    cout << "Resultado: "<<resultado<<endl;
}


int main() {
    char opcion = ' ';
    int numero1, numero2;
    float resultado;
    do {
        opcion = Menu();
        if (opcion != 'X'){
            IngresarDatos(numero1, numero2);
            resultado = RealizarOperacion(opcion,numero1, numero2);
            MostrarResultado(resultado);
        }
    } while(opcion != 'X');
    return 0;
}
