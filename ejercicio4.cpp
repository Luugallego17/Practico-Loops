#include <iostream>
using namespace std;

int main () {
    
    int n, r = 1;
    cout << "ingresa un numero entero positivo" << endl;
    cin >> n;
    
  if (n < 0){
      cout << "no se puede calcular con numeros negativos" << endl;
  } else {
      for (int i = 1; i <= n; i++){
          r*=i;
      }
  }
     cout << "el factorial de " << n << " es " << r << endl;
     
    return 0;
}