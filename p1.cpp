#include <iostream>

#include <string.h>
//libreria de windows
//permite establecer time duracion
#include <windows.h>
//libreria para eltiempo
//para dar salida a datos de time
#include <time.h>

//libreria conio, para colocar 
// en plano x/y
//recordar que es externa 
// es decir que se debe nstalar
#include <conio.h>

#include <stdio.h>

#include<locale.h>
//libreria para utilizar metodos suy
#include <cstdlib>

using namespace std;
//a;adiendo la clase fecha

	void gotoxy(int x,int y) // funcion para localizar
	{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
      if (bool clean = true)
     {
     	x = 0;  
    	y = 0;
	 }
	  
	};

	void cleaner()  //funcion para borrar una parte de pantalla
	
	{
		
		
	for (int i=0; i<10; i++)
		printf("\n");
		
	}
	
	void stylecu()	//creador de cuadro de estilo
	{

		const int icuadro=0;
		int style;
		for (int icuadro=0; icuadro<480;  icuadro++)
	{
		
		 printf("%c", 219);
		 
	}
		icuadro == 480;

	};
	
	void cuadro()	//almacen de localizacion de cuadros
	{
		bool pararcuad = true;
		do 
		{
		gotoxy(0,1);	//localizacion cuadro arriba
		stylecu();
	
		gotoxy (0,20);	//localizacion cuadro abajo
		stylecu();
		}
		while (pararcuad = true);
	};
	
	void logogin()	//logo del programa
	{
		bool logo = true;
		do{
		gotoxy(18,9);
		cout << "**********************************************"<<endl;
		Sleep (110);
		gotoxy(18,10);
		cout << "  _______  __ .__   __..___________. _______  "<<endl;
		Sleep (110);
		gotoxy(18,11);
		cout << " /  _____||  ||  \\ |  ||           ||       \\ "<<endl;
		Sleep (120);
		gotoxy(18,12);
		cout << "|  |  __  |  ||   \\|  |`---|  |----`|  .--.  |"<<endl;
		Sleep (130);
		gotoxy(18,13);
		cout << "|  | |_ | |  ||  . `  |    |  |     |  |  |  |"<<endl;
		Sleep (110);
		gotoxy(18,14);
		cout << "|  |__| | |  ||  |\\   |    |  |     |  '--'  |"<<endl;
		Sleep (120);
		gotoxy(18,15);
		cout << " \\______| |__||__| \\__|    |__|     |_______/ "<<endl;
		Sleep (130);
		gotoxy(18,17);
		cout << "**********************************************"<<endl;
		gotoxy(18,16);
		cout << ""<<endl;	
		cout<< endl;
		cout<<endl;
		system ("cls");
		

		}

		while (logo = true);
		
		
	};
		
	void fechaactual()	//fecha actual del sistema
	{
		char fecha[25];//ctime devuelve 26 caracteres pero tambien se podría usar un puntero de char
	    time_t current_time;
	    current_time=time(NULL);
	    ctime(&current_time);
	    strcpy(fecha, ctime(&current_time));
	    printf("%s", fecha);
	
		
	};
	 
	
	void menuprincipalt()	//Titulo menu
	{
		gotoxy(28,9);
		cout << "*************************"<<endl;
		gotoxy(28,10);
		cout << "*     MENU PRINCIPAL    *"<<endl;
		gotoxy(28,11);
		cout << "*************************"<<endl;
	};
	
	
	
int main()
{
	
	bool clean = true;

	//llamando almodo tama;o de ventana
	system("mode con: cols=80 lines=30");
	//mostrando la fecha  pantalla
	fechaactual();
	//creandobarra griss de dise;o
	
	
	
	system ("cls");	//borrando 
	logogin();	//invocando logo
	Sleep (5000);

	cuadro();	//invocando cuadros inicio
	menuprincipalt();
	//llamando al logo de inicio
	cuadro();	//invocando cuadro nuevamente
	
	
	
	
	system ("pause");
	return 0;
}
