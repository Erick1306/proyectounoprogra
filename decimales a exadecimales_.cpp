#include<iostream>

using namespace std;

int main(){

    int digito[20];
    int decimal, residuo, resultado, n=0;


    cout<< " Ingrese el numero de base 10 a base 16" <<  endl;
    cin>> decimal;


    do{

        residuo= decimal % 16;

        resultado= decimal /16;

        digito[n]=residuo;

        decimal=resultado;
        n++;

    }while (resultado > 15);
    digito[n]= resultado;

    cout << " el equivalente en base 16 es:";

    for (int m = n; m>= 0; m--)
    {
        if (digito[m]==10)
            cout << "A";


    else if (digito[m]==11){
        cout <<"B";
    }
    else if (digito [m]==12){
        cout <<"C";
        }
    else if (digito [m]==13){
        cout <<"D";
        }
    else if (digito [m]==14){
        cout <<"E";
        }
    else if (digito [m]==15){
        cout <<"F";
        }
    else if (digito [m]==16){
        cout <<"G";
        }

    cout<< endl;
    }
    return 0;

}


