#include <iostream>

using namespace std;

void eliminar_vocales(string texto, int pos) {
    string nTexto = "";
    char letra = tolower(texto[pos]);
    if (texto.size() == 0 || pos == texto.size()) return;
    else {
        if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u') {
            nTexto += letra;
            cout << nTexto;
        }
        eliminar_vocales(texto, pos + 1);
    }

}

int main() {
    string palabra = "hola como estas";
    int pos = 0;
    eliminar_vocales(palabra, pos);

}