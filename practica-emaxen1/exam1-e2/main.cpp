#include <iostream>
#include <cmath>

using namespace std;

double distancia(int x1, int y1, int x2, int y2) {
    double xs = pow(x2 - x1, 2);
    double ys = pow(y2 - y1, 2);

    return pow(xs + ys, 0.5);
}

string poligono(int lados) {
    if (lados == 3) {
        return "Triangulo";
    } else if (lados == 4) {
        return "Cuadrilatero";
    } else if (lados == 5) {
        return "Pentagono";
    } else if (lados == 6) {
        return "Hexagono";
    } else if (lados == 7) {
        return "Heptagono";
    } else if (lados == 8) {
        return "Octagono";
    } else if (lados == 9) {
        return "Nonagono";
    } else if (lados == 10) {
        return "Decagono";
    }

    return "";
}

int main() {
    int vertices = 0;
    cout << "Numero de vertices: ";
    cin >> vertices;

    int primeraX;
    int primeraY;
    int prevX;
    int prevY;
    int x;
    int y;

    double perimetro = 0;

    for (int i = 0; i < vertices; i++) {
        if (i > 0) {
            prevX = x;
            prevY = y;
        }
        cout << "Vertices num " << i + 1 << endl;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;

        if (i == 0) {
            primeraX = x;
            primeraY = y;
        }


        if (i > 0) {
            perimetro += distancia(x, y, prevX, prevY);
        }
    }

    perimetro += distancia(x, y, primeraX, primeraY);

    cout << "Es un " << poligono(vertices) << endl;
    cout << "Su perimetro es: " << perimetro << endl;

    return 0;
}
