#include<iostream>
using namespace std;

int main(){
    int number;


    do{

    cout<<" digita un numero entre 1 a 10:";
    cin>>number;
    if(number<1 || number>10){

         cout<< "vuelve a colocar un numero de 1 a 10";
        }
    }while ( number<1 || number>10);
     cout<<"\n\n";
    for(int i= 1; i<=10; i++){
         cout<<i<<"x" <<number<<"=" <<i*number<<"\n";
    }

    system("pause");
    return 0;
}

