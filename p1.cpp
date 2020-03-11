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
		
		gotoxy(0,1);	//localizacion cuadro arriba
		stylecu();
	
		gotoxy (0,20);	//localizacion cuadro abajo
		stylecu();

	};
	
	void logogin()	//logo del programa
	{
		
		for (int logo = 0;logo<1;logo++)
	{
	
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
		cout<< endl; cout<<endl;
		
		cout<<"\t\t.........Presione una tecla para continuar.........";
		cout<<endl;
		}	
		
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
		cuadro();	//invocando cuadro nuevamente
		gotoxy(28,8);
		cout << "*************************"<<endl;
		gotoxy(28,9);
		cout << "*     MENU PRINCIPAL    *"<<endl;
		gotoxy(28,10);
		cout << "*************************"<<endl;
	};
	
	
	void direccionales()
	{
		
		
		
		//arriba = 22472 
		//abajo = 22480
		//izq = 22475
		//der = 22477
		/*system ("cls");
		*/

		int y=2;
		char c;
		gotoxy(0,y);
		printf("-->");
		gotoxy(5,1);
		printf("Ingresar");
		gotoxy(5,2);
		printf("Informacion");
		gotoxy(5,3);
		printf("Salir");
		
		
		/* menuprincipalt();
		gotoxy (28,12);
		cout<<"Iniciar seccion"<<endl;
		gotoxy (28,14);
		cout<<"Ingresar sin registrar"<<endl;
		*/
		/*do
		{
			c=getch();
			if(c==-32)//para saber si es una flecha
				{
						
					
				}
		}
		
		while (1);
		*/
		
		
		do 
		{			
			c=getch();
			if (c==-32)//para saber si es direccional
			{
				

				gotoxy(0,y);
				printf("   ");
				
				c=getch();
				if (c==72)//arriba
					if (y==0)
						{
							y=3;	
						}
					else
						{
							 y--;
								//y++;
						}
					
					
					if (c==80)//abajo
							if (y==3)
								{
									y=1;
								}
							else
								{
									y++;
								}
								
					gotoxy(0,y);
					printf("-->");
			}		
		
			if (c==13)
				{
				
				gotoxy(20,10);
				printf("escogistelaopcion %i",y);
				
				///// casos de menus
				
				do 
				
				{
					switch(y) 
					{
					case 1: 
						{
							system ("cls");
							gotoxy(28,12); printf ("Usuario:\n");
							gotoxy(28,14);printf ("Clave:\n");
							gotoxy(28,16);printf("salir:\n");
							switch(y)
							{
							case 1: 
							break;
							case 2: 
								
							break;
							case 3: gotoxy(28,16);printf("salir\n");
							break;
							default: printf("Error");
							}
							
						}
					break;
					case 2: 
					break;
					case 3: 
					break;
					default: printf("Error");
					}
						
				}
				
				while (y>5);
					
				}
				
			}
			
		 while (1);					
		}
		
		
	
	//menu de opciones 1
	/*	void opc1()
	
	{
			

	
			int opcion;
		    menuprincipalt();
		    direccionales();
		    do {
		          // Para limpiar la pantalla
		        
		        // Texto del menú que se verá cada vez
		        gotoxy(28,12);
		        cout << "Ingresar" << endl;
		        gotoxy(28,14);
		        cout << "Acceder sin Registro" << endl;
		        gotoxy(28,16);
		        cout << "SALIR" << endl;
		        cin >> opcion;
		        
		        switch (opcion) {
		            case 1:
		                // Lista de instrucciones de la opción 1                
		                
		                system("pause>nul"); // Pausa
		                break;
		                
		            case 2:
		                // Lista de instrucciones de la opción 2                
		                
		                system("pause>nul"); // Pausa
		                break;
		                
		            case 3:
		                // Lista de instrucciones de la opción 3                
		                
		                system("pause>nul"); // Pausa            
		                break;
		                
		            case 4:
		                // Lista de instrucciones de la opción 4                
		                
		                system("pause>nul"); // Pausa                
		                break;
		        }        
		    } while (opcion != 5); 
    
	};
	*/	
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
	getch();
	system ("cls");
	//llamando al logo de inicio
	
	//	opc1();
	
	direccionales();
	system ("pause");
	return 0;
}
