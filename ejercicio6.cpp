#include <iostream>
using namespace std;

int main (){
    
    int n, d, nn = 0;

    do {
    cout << "ingrsa un numero entero positivo: ";
    cin >> n;
    while (n > 0){
        d = n % 10;
        nn += d;
        n = n / 10;
    }} while (n != 0);
    cout << "la suma es: " << nn << endl;
    return 0;
}