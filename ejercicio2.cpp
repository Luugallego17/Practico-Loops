#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palabras, palabra = "";
    cout << "introduce una oracion" << endl;
    getline (cin, palabras);
    
    string palabras_2 = " ";
    for (int i = 0; i <= palabras.size(); i++) {
    if (palabras[i] == ' ' || i == palabras.size()) {
    cout << "[" << palabra << "]" << endl;
       palabra = "";
    } else {
        palabra += palabras[i];
    }
}
    return 0;
}