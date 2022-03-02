#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
void gotoxy(int x1,int y1);
int x,y;
char opcion;

int main()
{
x=20; y=9;

//cin>>opcion;
while(opcion!='z')
	{system("cls");
	gotoxy(0,0); cout<<"[a]Derecha";
	 gotoxy(0,1); cout<<"[d]Izquierda";
	 gotoxy(0,2); cout<<"[w]Arriba";
	 gotoxy(0,3); cout<<"[s]Abajo";
	 gotoxy(10,0); cout<<"[z]salir";
	gotoxy(x,y); cout<<"*";
	 opcion=getch();
	 switch(opcion)
		{case 'w':	y--; break;
		case 's':	y++; break;
		case 'a':	x--; break;
		case 'd':	x++; break;
		}
	}




return 0;
}
	void gotoxy(int x1,int y1){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x1;
    dwPos.Y= y1;
    SetConsoleCursorPosition(hcon,dwPos);
	 }
