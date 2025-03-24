#include <iostream>
#include <string>
using namespace std;

int main() {
    
string linea;
cout << "ingresa el nombre del documento: " << endl;
getline(cin, linea);

int inicio = 0;
int i = 0;
while (i < linea.length()) {
    int inicio_palabra = i;
    while (i < linea.length() && linea[i] != ' ') {
        i++;
    }
    inicio = i;
    cout << inicio << "\n";
    i++;
}

    return 0;
}