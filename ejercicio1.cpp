#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string linea;
    cout << "Ingresa el nombre del documento: " << endl;
    getline(cin, linea);

    int inicio = 0;

    for (int i = 0; i <= linea.size(); i++) {
        if (linea[i] == ' ' || i == linea.size()) {
            inicio = i;
            cout << inicio << "\n";
        }
    }

    return 0;
}