#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, pal = "", rev = "";
    int i;
    
    cout << "Ingrese el palindromo: ";
    getline(cin, texto);

    for (i = 0; i < texto.size(); i++) {
        if (texto[i] != ' ') {
            pal += texto[i];
        }
    }
    
    for (i = pal.size() - 1; i >= 0; i--) {
        rev += pal[i];
    }
    
    if (pal == rev) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}