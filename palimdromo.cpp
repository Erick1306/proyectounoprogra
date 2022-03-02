#include <string>
#include <iostream>
using namespace std;
int main() {
    string texT;
    int aux = 0, igual = 0;

    cout << "Ingrese la palabra a evaluar: "<< endl;
    getline(cin >> ws, texto);

    for(int ind = texT.length() - 1; ind >= 0; ind--) {
        if(texT[ind] == texT[aux]) {
            igual++;
        }
        aux++;
    }

    if(texT.length() == igual) {
        cout << "La palabra ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :D" << endl;
    }

    return 0;
}
