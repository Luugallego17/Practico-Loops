#include <iostream>
using namespace std;

int main (){
    
    int origin, num, rev, dig;
    cout << "Ingrese un número: ";
    cin >> num;
    
    origin = num;
    rev = 0;
    
    while (num > 0){
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }
    
    if (origin == rev){
        cout << "Es palindrome";
    } else {
        cout << "No es palindrome";
    }
    return 0;
}