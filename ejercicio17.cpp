#include <iostream>
using namespace std;

int main (){
    
    int n, i, num, div;
    cout << "Ingrese cuántos números primos quiere mostrar: ";
    cin >> n;
    
    num = 2;
    i = 0;
    
    while (i < n){
        div = 0;
        
        for (int j = 1; j <= num; j++){
            if (num % j == 0){
                div = div + 1;
            }
        }
            if (div == 2){
                cout << num << " ";
                i = i + 1;
            }
        num++;
    }
    
    return 0;
}