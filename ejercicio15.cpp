#include <iostream>
using namespace std;

int main (){
    
    int n, r, b, p;
    
    cout << "Ingrese un número decimal: ";
    cin >> n;
    
    b = 0;
    p = 1;
    
    while (n > 0){
        r = n % 2;
        b = b + r * p;
        p = p * 10;
        n = n / 2;
    }
    cout << "El numero binario es: " << b;
    return 0;
}