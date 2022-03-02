#include <iostream>
using namespace std;
int main()
{int opcion,filas,columnas,triangulo,diamante;
cout<<"[1]Para cuadrado"<<endl;
		cout<<"[2]Para triangulo"<<endl;
		cout<<"[3]Para diamante"<<endl;
		cin>>opcion;
switch(opcion)
			{
			case 1:
				{cout<<"Ingrese el tamaño de filas: "<<endl;
				cin>>filas;
				cout<<"Ingrese el tamaño de columnas: "<<endl;
				cin>>columnas;
					for(int i=0; i<filas; i++)
					{
						for(int j=0; j<columnas; j++)
						{
						if(i==0||j==0||i==filas-1||j==columnas-1)
						{cout<<" *";} else {cout<<"  ";}
						}
					cout<<endl;
					}

				break;
				}

			case 2:
				{cout<<"Ingrese el tamaño del triangulo "<<endl;
				cin>>triangulo;
				int a,b,c;
					for(a=1; a<=triangulo; a++)
					{
						for(c=triangulo; c>a; c--)
						{cout<<" ";
						}
						for(b=1; b<=a; b++)
						{
							cout<<"* ";
						}cout<<endl;
					}

				break;
				}

			case 3:
				{cout<<"Ingrese el tamaño del diamante "<<endl;
				cin>>diamante;
				int d,e,f;
					for(d=1; d<=diamante; d++)
					{
						for(f=diamante; f>d; f--)
						{cout<<" ";
						}
						for(e=1; e<=d; e++)
						{
						cout<<"* ";
						}cout<<endl;
					}
				int g,h,k;
					for(g=1; g<=diamante; g++)
					{

						for(h=1; h<=g; h++)
						{cout<<" ";
						}

						for(k=g; k<diamante; k++)
						{
							cout<<"* ";
						}cout<<endl;
						}
				break;
				}
			}
return 0;
		cout<<endl;
		system("pause");
		system("cls");
}
