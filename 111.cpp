#include <iostream>
#include <conio.c>
using namespace std;
int menu()
{
int op;
system("cls");
cout<<"EJEMPLO DE RETORNO";
cout<<"1...REGISTRO";
cout<<"2.BUSQUEDA";
cout<<"3.BORRAR";
cout<<"4.SALIR";
cout<<"ELEGIR OPCION"; cin>>op;
return op;
}

int main()
{
int op;

do {
op=menu();
swicth(op)
{
case 1: registrar();
case 2: busqueda();
case 3: salir();
} while (op!=3);
}

void registrar()
{
system("cls"); //limpia pantalla

........... } //codigo de este procedimiento

void salir()
{
system("cls"); //ES VISTOZO PRUEBALO
for(int i=40;i>0;i--)
{
gotoxy(i,25);cout<<"GRACIAS POR USAR EL PROGRAMA";
system("cls");
}
}
	
	return 0;
}
