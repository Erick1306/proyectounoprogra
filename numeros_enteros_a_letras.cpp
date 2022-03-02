#include<iostream>
#include<locale.h>
using namespace std;

int main(){
int number, unit, dec, cent, unim;
cout<< "Escriba un numero desde 0 a 9999";
cin>>number;

    if(number=0 && number<=9999){

    unit=number%10;
    number=number/10;
    dec=number%10;
    number=number/10;
    cent=number%10;
    unim=number%10;

        switch(unim){
            case 0: cout<<""; break;
            case 1: cout<<"mil  "; break;
            case 2: cout<<"dos mil  "; break;
            case 3: cout<<"tres mil "; break;
            case 4: cout<<"cuatro mil   "; break;
            case 5: cout<<"cinco mil    "; break;
            case 6: cout<<"seis mil "; break;
            case 7: cout<<"siete mil    "; break;
            case 8: cout<<"ocho mil "; break;
            case 9: cout<<"nueve mil  "; break;
            }
        switch(cent){
            case 0: cout<<""; break;
            case 1: if (dec==0 && unit=0);{
            cout<< " cien  ";
            }
            else{
                cout<<"ciento ";
            }
        break;
        case 2: cout<<"docientos    ";  break;
        case 3: cout<<"trecientos    "; break;
        case 4: cout<<"cuatrocientos    ";  break;
        case 5: cout<<"quinietos    ";  break;
        case 6: cout<<"seiscientos  ";  break;
        case 7: cout<<"setecientos  ";  break;
        case 8: cout<<"ochocientos  ";  break;
        case 9: cout<<"novecientos  ";  break;

        }
        switch(dec){
            case if switch (unit){
            case 0: cout<<""; break;
            case 1: cout<<"mil  "; break;
            case 2: cout<<"dos mil  "; break;
            case 3: cout<<"tres mil "; break;
            case 4: cout<<"cuatro mil   "; break;
            case 5: cout<<"cinco mil    "; break;
            case 6: cout<<"seis mil "; break;
            case 7: cout<<"siete mil    "; break;
            case 8: cout<<"ocho mil "; break;
            case 9: cout<<"nueve mil  "; break;
            }

}
}
https://www.youtube.com/watch?v=107moWiFGt4
