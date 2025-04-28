#include <iostream>
using namespace std;

int main (){
    
    double U, n;
    int i;
    
    U = 1;
    cout << "U0= " << U << endl;
    
    for (i = 1; i <= 10; i++){
        U = U/i;
        cout << "U" << i << "= " << U << endl;
    }
    
    return 0;
}