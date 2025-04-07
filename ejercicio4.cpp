#include <iostream>
using namespace std;

int main () {
    
    int n, r = 1;
    cout << "ingresa un numero entero positivo" << endl;
    cin >> n;
    
    while (n < 0 || n >= 15){
  if (n < 0){
      cout << "no se puede calcular con numeros negativos" << endl;
  } else if (n >= 15){
      cout << "el numero es muy grande, no se puede calcular " << endl;
  }
     cout << "ingresa un numero entero positivo" << endl;
    cin >> n;    
    }
  
      for (int i = 1; i <= n; i++){
          r*=i;
  }
  cout << "el factorial de " << n << " es " << r << endl;
  
    return 0;
}