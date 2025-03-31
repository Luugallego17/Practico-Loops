#include <iostream>
using namespace std;

int main () {
    
    int visitas = 0;
    int cant_pastel;
    
  
    while (visitas < 10){
        cin >> cant_pastel;
        if (cant_pastel == 1){
            cout << "Om-nom-nom :P" << endl;
        } else if (cant_pastel == 0) {
            cout << "Sin pastel :(" << endl;
        } else {
            cout << "no compatible" << endl;
        }
visitas ++;
    }
    
    return 0;
}