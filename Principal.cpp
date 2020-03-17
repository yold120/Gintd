#include <iostream>

#include <string.h>
//libreria de windows
//permite establecer time duracion
#include <windows.h>
//libreria para eltiempo
//para dar salida a datos de time
#include <time.h>

//
#include <fstream>

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

//variables de productos
	double id=0;
	string descripcion;
	string categoria;
	double preciov;
	double precioc;
	string proveedor;

//variables de empleados

	string nomuser;
	string ced;
	string sex;//masculino o femenino
	string direc;
	string correo;
	string cel;
	string tel;
	string turno;//matutino o nocturno
	string cargo;
	string clave;
	int maquina;
	double sueldoini;
	int edad;
	string user;
	string claveuser;
//variabl;es de admin
	string admin;
	string nomadmin;
	string claveadmin;
	string pseguridad;
	//variables de ayuda
	string s = "\n";
	string e=" ";

//variablesdeentrada





//a;adiendo la clase fecha

	void gotoxy();
	
	void cleaner();
	
	void stylecu();
	
	void cuadro();
	
	void logogin();
	
	void fechaactual();
	
	void menuprincipalt();
	
	void direccionales();
	
	void regadmin();
	
	void regadmin(ofstream &es);


	int main()
	{
		ofstream Esc;

	//llamando almodo tama;o de ventana
	//system("mode con: cols=80 lines=30");
	//mostrando la fecha  pantalla
	//fechaactual();
	//creandobarra griss de dise;o
	//system ("cls");	//borrando 

	//logogin();	//invocando logo
	//getch();
	//system ("cls");
	//llamando al logo de inicio
	
	//	opc1();
	
		regadmin(Esc);
		direccionales();
		system ("pause");
		
		
		
		
		return 0;
	}





	
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

		int y=0;
		char c;
		gotoxy(0,y);
		cout<<"-->";
		//gotoxy(5,1);
		cout<<"	Ingresar"<<endl;
		//gotoxy(5,2);
		cout<<"	Informacion"<<endl;
		//gotoxy(5,3);
		cout<<"	Salir"<<endl;
		
		do 
		{			
			c=getch();
			if (c==-32)//para saber si es direccional
			{
				

				gotoxy(0,y);
				cout<<"   ";
				
				c=getch();
				if (c==72)//arriba
					if (y==0)	//posicion actual
						{
							y=2;	//regresa a la posicion
						}
					else
						{
							 y--;	//cantidad a avanzar
								//y++;
						}
					
					if (c==80)//abajo
							if (y==2)	//posicion actual
								{
									y=0;//regresa a la posicion
								}
							else
								{
									y++; //cantidad a avanzar
								}
								
					gotoxy(0,y);
					cout<<"-->";
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
					case 0: //Ingresar
						{
							system ("cls");
							//gotoxy(28,12); 
							cout<<"\t Usuario: \n";
							//gotoxy(28,14);
							cout<< "\t Clave: \n";
							//gotoxy(28,16);
							cout<<"\t salir: \n";
							switch(y)
							{
							case 1: //Usuario
							cout<<"\t Usuario: \n";
							cin>>user;
							//gotoxy(28,14);
							cout<< "\t Clave: \n";
							cin>>claveuser;
							//gotoxy(28,16);
							cout<<"\t salir: \n";
							break;
							case 2: //Clave
								
							break;
							case 3: //salir
							
							
							//gotoxy(28,16);
							cout<<"salir \n";
							
							break;
							default: cout<<"Error";
							}
							
							}
							break;
					case 2: //Acceder sin registro
					
					
					break;
					case 3: //Salir
					
					
					break;
					default: printf("Error");
					}
						
				}
				
				while (y>2);
					
				}
				
			}
			
		 while (1);					
		}
		
		
	void regadmin(ofstream &es)
	{
	
	system ("cls");
		
	while(nomadmin == admin)
	{
	
	es.open("Admin.txt",ios::out);
	
	
	if(es.is_open())
	{
	cout<<"========================"<<s;
	cout<<"   Bienvenido a GINTD   "<<s;
	cout<<"========================"<<s;
	
	cout<<"Nombre-------------: ";
	getline(cin,nomadmin);
	cout<<"Usuario------------: ";
	cin>>admin;	//para ignorar la ultima instruccion del getline
	cout<<"Preg. Seguridad----: ";
	cin>>pseguridad;
	cout<<"Clave--------------: ";
	cin>>claveadmin;
	string x;
	cout<<"Guardar?(y/n)------: ";
	cin>>x;
	

	
	//if(verifica(ced))
	es<< nomadmin<< e <<admin << e <<pseguridad<<e<<claveadmin<<endl;	
	
	es.close();
	}
	
	else
		cout<<"El archivo no se pudo abrir"<<s;
	}
	
}
	

