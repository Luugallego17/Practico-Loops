#include <iostream>
#include <cmath>
using namespace std;

int main (){
    
    int N, k, i, suma;
    cout << "Ingrese N y k: ";
    cin >> N >> k;
    
    suma = 0;
    for (i =  1; i <= N; i++){
        suma = suma + pow(i,k);
    }
    
    cout << "Resultado es: " << suma << endl;
    
    return 0;
}