#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    int cont = 0;

    cout << "Ingrese la frase: ";
    getline(cin, frase);

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == 'f') {
            cont++;
            if (cont == 2) {
                cout << i << endl; 
                return 0;
            }
        }
    }

    if (cont == 1) {
        cout << -1 << endl;
    } else {
        cout << -2 << endl;
    }

    return 0;
}