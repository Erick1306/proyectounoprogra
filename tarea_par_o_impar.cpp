#include <iostream>

#include <cstdlib>

using namespace std;
int numero;
int main(){
div_t resultado;
cout << "Ingrese un numero para verificar si es par o impar" << endl;
cin >> numero;

resultado=div(numero,2);

if (resultado.rem>0)

{

cout << numero << " este numero es impar" << endl;

}

else {

    cout << numero << " es numero es par" << endl;

}



cin.get();

cin.ignore();

return 0;

}
