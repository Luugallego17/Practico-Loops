#include <iostream>
using namespace std;

int main (){
    
    int a, b, t = 0;
    
    cout << "ingrese dos numeros: ";
    cin >> a >> b;
    
    while (b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    cout << "el MCD es: " << a;
    return 0;
}