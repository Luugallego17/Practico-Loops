#include <iostream> 
using namespace std;

int main (){
    
    double U, V;
    int i;
    
    U = 1;
    V = 1;
    
    for (i = 1; i <= 10; i++){
        U = U/i;
        V = V + U;
        cout << "U" << i << "= " << U << " V" << i << "= " << 1 << endl;
    }
    return 0;
}