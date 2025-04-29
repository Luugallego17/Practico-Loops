#include <iostream>
using namespace std;

int main() {
    int inicio, fin;

    cout << "Ingrese el número inicial y fin: ";
    cin >> inicio >> fin;

    if (inicio <= 0) {
        cout << "El número debe ser positivo y mayor a cero" << endl;
    }

    if (fin < inicio) {
        cout << "El número de fin no debe ser menor al inicial" << endl;
    }

    for (int n = inicio; n <= fin; n++) {
        int m = n;
        int contador = 0;

        while (m != 0) {
            if (m % 3 == 0) {
                m = m + 4;
            } else if (m % 4 == 0) {
                m = m / 2;
            } else {
                m = m - 1;
            }
            contador++;
        }

        cout << n << " -> " << contador << endl;
    }

    return 0;
}