#include <iostream>

#include <cstdlib> // libreria para funcion exit la usare si alguien escribe una letra();



using namespace std;

int opcion;

float first=1;

float second=1;

float result;



int main(){



cout << "Escribe el numero de opcion que deseas Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;



cin >> opcion;

if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 )

{

exit(EXIT_FAILURE); // esta es la funcion para salir del programa si alguien escribe una letra.

}

cout << "Ingresa el primer numero: ";

cin >> first;

cout << "Ingresa el segundo  numero: ";

cin >> second;



if (opcion==1){

    result = first+second;

}

if (opcion==2){

    result = first-second;

}

if (opcion==3){

    result = first*second;

}

if (opcion==4){

    result = first/second;

}



cout << result;



cin.ignore();

cin.get(); // *Nota


cout<< "Gracias por usar este programa feliz dia!";


return 0;

}
