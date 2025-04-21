#include <iostream>
using namespace std;

int main () {
    
    int n, i;
    double  sum, sig, t;
    
    cout << "ingrese un numero: ";
    cin >> n;
    
    sum = 0;
    sig   = 1;
    
    for (i = 1; i <= n; i++) {
        t = sig * (1.0 /i);
        sum = sum + t;
        sig = sig * (-1);
    }
    cout << "la suma de los primeros " << n << " terminos es: " << sum << endl;
    return 0;
}