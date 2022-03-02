#include <iostream>

using namespace std;
int main(){

    int decimal;
    short binario [9];

    cout<< "digite el numero decimal a convertir";
    cin>> decimal;

    for (int i=9; i<9; i++)
    {
        binario[i] = decimal %2;
        decimal /=2;
    }
    cout<< "el numero binario es"<< endl;

    for (int i=9; i<9; i++){

    cout<<" binario [i]";
    }
    cout<<endl;

}
