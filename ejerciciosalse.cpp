#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};
double calcularMayorMagnitud(Point puntos[], int n, int &indiceMayor) {

    if (n <= 0) {
        indiceMayor = -1;
        return 0.0;
    }

    double maxMagnitud = sqrt(puntos[0].x * puntos[0].x + puntos[0].y * puntos[0].y);
    indiceMayor = 0;

    for (int i = 1; i < n; i++) {

        double magnitud = sqrt(puntos[i].x * puntos[i].x + puntos[i].y * puntos[i].y);

        if (magnitud > maxMagnitud) {
            maxMagnitud = magnitud;
            indiceMayor = i;
        }
    }

    return maxMagnitud;
}

int main() {

    int n;

    cout << "Ingrese la cantidad de puntos: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad invalida de puntos." << endl;
        return 0;
    }

    Point puntos[n];

    cout << "\nIngrese las coordenadas de los puntos\n";

    for (int i = 0; i < n; i++) {

        cout << "\nPunto " << i + 1 << endl;

        cout << "x: ";
        cin >> puntos[i].x;

        cout << "y: ";
        cin >> puntos[i].y;
    }

    int indiceMayor;

    double mayorMagnitud = calcularMayorMagnitud(puntos, n, indiceMayor);

    cout << "\nRESULTADOS\n";
    cout << "Mayor magnitud: " << mayorMagnitud << endl;

    cout << "Punto con mayor magnitud:" << endl;
    cout << "Indice: " << indiceMayor << endl;
    cout << "Coordenadas: (" << puntos[indiceMayor].x << ", " << puntos[indiceMayor].y << ")" << endl;

    return 0;
}