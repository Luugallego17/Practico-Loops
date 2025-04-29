#include <iostream>
using namespace std;

int main (){
    
    int div, divisor, c, r;
    cout << "Ingrese el dividendo y el divisor: ";
    cin >> div >> divisor;
    
    c = 0;
    r = div;
    
    while (r >= divisor){
        r -= divisor;
        c += 1;
    }
    cout << "el cociente es: " << c << endl;
    cout << "el residuo es: " << r << endl;
    return 0;
}