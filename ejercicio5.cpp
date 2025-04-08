#include <iostream>
using namespace std;

int main() {
    int n, k;

    do {
        cout << "ingresa un numero de 1 a 7: ";
        cin >> n;
    } while (n < 1 || n > 7);

    do {
        cout << "ingresa un numero de 1 a 99: ";
        cin >> k;
    } while (k < 1 || k > 99);

    
    int dia = 1;
    int col = n;

    for (int i = 1; i < n; i++) {
        cout << " "; 
    }

    while (dia <= k) {
       if (dia < 10) {
          cout << " " << dia << " ";
        } else {
          cout << dia << " ";
        }  
        if (col == 7) {
            cout << endl;
            col = 1; 
        } else {
            col++;
        }

        dia++;
    }

    cout << endl;
    
    return 0;
}