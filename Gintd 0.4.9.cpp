//a;adirclase admin (a)
//a;adir classede user (u) 


#include <iostream>

#include <ios>

#include <limits>


#include <cstring>
//libreria de windows
//permite establecer time duracion
#include <windows.h>
//libreria para eltiempo
//para dar salida a datos de time
#include <time.h>

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



//variables de servicios
	string serv;
	string tserv;
	string descripcionserv;
	double preciomin;
	double preciomax;
	string mserv;
	


//variables de productos
	double id;
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
	string maquina;
	string sueldoini;
	string edad;
	string user;
	string claveuser;
//variabl;es de admin
	string admin = "1";
	string nomadmin;
	string claveadmin = "1";
	string pseguridad;
	//variables de ayuda
	string s = "\n";
	string e=" ";
	
	ofstream Esc;
	ofstream espr;
	ofstream ess;
	
//variablesdeentrada
	bool enter = true;
	string tuser;





//a;adiendo la clase fecha
////////////////////////////////////////////dise;os
	void gotoxy();

	void back();
	
	void cleaner();

	void stylecu();

	void cuadro();

	void logogin();

	void fechaactual();

	void menuprincipalt();

	void direccionales();

///////////////////////////////////////////////admin
	void regadmin();

	void regadmin(ofstream &es);
	
	void menuaprincipaldmin();
	
	void agregarp(ofstream &es);
//////////////////////////////////////////////Productos
	void agregarpr(ofstream &es);
	
	void modificarpr(ifstream &Lec);
	
	void buscarpr(ifstream &Lec);
	
	void modificarpr(ifstream &Lec);
	
	void borrarpr(ifstream &Lec);
/////////////////////////////////////////////Servicios
	void agregars(ofstream &es);

	

//////////////////////////////////////////////MENU PRINCIPAL	
	
	int menuprincipal(){
	int x;
	//color(9)
	cout<<"Bienvenido"<<endl<<endl;
	int col(10);
	cout<<"1. Ver personal"<<endl;
	cout<<"2. ver productos"<<endl;
	cout<<"3. ver Servicios"<<endl;
	cout<<"4. Mantenimiento"<<endl;
	cout<<"Opcion"<<endl;
	cin>>x;
	return x;
}

//////////////////////////////////////////////////// PROGRAMA///////////////////////////
//////////////////////////////////////////////////// PROGRAMA///////////////////////////
//////////////////////////////////////////////////// PROGRAMA///////////////////////////
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
////////////////////////////////////////////////////////////// funcion logo GINTD
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
	
//////////////////////////////////////////////////////////// FECHA
	void fechaactual()	//fecha actual del sistema
	{
		char fecha[25];//ctime devuelve 26 caracteres pero tambien se podr�a usar un puntero de char
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

///////////////////////////////////////////////////////////DIRECCIONALES
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
							cin>>user;
							//gotoxy(28,14);
							cout<< "\t Clave: \n";
							cin>>claveuser;
							//gotoxy(28,16);
							cout<<"\t salir: \n";
							bool confirm = false;
							if (user == admin && claveuser == claveadmin)
								
								menuaprincipaldmin();							
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

/////////////////////////////////////////////////funcion de pantalla incicio
	void regadmin(ofstream &es)
	{

	system ("cls");

	
	
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

/////////////////////////////////////////////
/////////////////////////////////////////////personal
/////////////////////////////////////////////
void agregarp(ofstream &es)
{

	string e=" ";

	system ("cls");

	es.open("Empleados.txt",ios::out|ios::app);

	if(es.is_open())
	{
	cout<<"========================"<<s;
	cout<<"    Ingresar Personal   "<<s;
	cout<<"========================"<<s;
	
	cout<<"Nombre----: ";
	cin>>ws;
	getline(cin,nomuser,'\n');
	cout<<"Direccion-: ";
	getline(cin,direc,'\n');
	cout<<"Cedula----: ";
	getline(cin,ced,'\n');
	cout<<"Celular---: ";
	getline(cin,cel,'\n');
	cout<<"Telefono--: ";
	getline(cin,tel,'\n');
	cout<<"Cargo-----: ";
	getline(cin,cargo,'\n');
	cout<<"Edad------: ";
	getline(cin,edad,'\n');
	cout<<"Sexo(M/F)-: ";
	getline(cin,sex,'\n');
	cout<<"Turno(M/T): ";
	getline(cin,turno,'\n');
	cout<<"Correo----: ";
	getline(cin,correo,'\n');
	cout<<"Sueldo----: ";
	getline(cin,sueldoini,'\n');
	cout<<"Maquina---: ";
	getline(cin,maquina,'\n');
	cout<<"Clave-----: ";
	getline(cin,clave);
	cout<<"Tipo User-: ";
	getline(cin,tuser,'\n');
	
	//if(verifica(ced))
	
	es<< nomuser;
	es<<'\n';
	es<<direc;
	es<<'\n';
	es<<ced;
	es<<'\n';
	es<<cel;
	es<<'\n';
	es<<tel;
	es<<'\n'; 
	es<<cargo;
	es<<'\n'; 
	es<<edad;
	es<<'\n';
	es<<sex;
	es<<'\n';
	es<<turno;
	es<<'\n';
	es<<correo;
	es<<'\n';
	es<<sueldoini;
	es<<'\n';
	es<<maquina;
	es<<'\n';
	es<<clave;
	es<<'\n';
	es<<tuser;
	es<<endl;	

	es.close();
	}

	else
		cout<<"El archivo no se pudo abrir"<<s;
}

void verp(ifstream &Lec)
{	
	system ("cls");
	
	Lec.open("Empleados.txt",ios::in);

	if(Lec.is_open())
	{
	cout<<"========================"<<s;
	cout<<"Personal de la empresa"<<s;
	cout<<"========================"<<s;
	
	getline(Lec, nomuser,'\n');	

	while(!Lec.eof())
	{
	getline(Lec, direc,'\n');	
	getline(Lec, ced,'\n');	
	getline(Lec, cel,'\n');	
	getline(Lec, tel,'\n');	
	getline(Lec, cargo,'\n');	
	getline(Lec, edad,'\n');	
	getline(Lec, sex,'\n');	
	getline(Lec, turno,'\n');	
	getline(Lec, correo,'\n');	
	getline(Lec, sueldoini,'\n');	
	getline(Lec, maquina,'\n');	
	getline(Lec, clave,'\n');	
	getline(Lec, tuser,'\n');	

	cout<<"Nombre-----:"<<nomuser<<endl;
	cout<<"Direccion--:"<<direc<<endl;
	cout<<"Cedula-----:"<<ced<<endl;  
	cout<<"Celular----:"<<cel<<endl;  
	cout<<"Telefono---:"<<tel<<endl;  
	cout<<"Cargo------:"<<cargo<<endl;
	cout<<"edad-------:"<<edad<<endl; 
	cout<<"Sexo-------:"<<sex<<endl;  
	cout<<"Turno------:"<<turno<<endl;
	cout<<"correo-----:"<<correo<<endl;
	cout<<"Sueldo-----:"<<sueldoini<<endl;
	cout<<"Maquina----:"<<maquina<<endl;
	cout<<"Clave------:"<<clave<<endl;
	cout<<"t. user----:"<<tuser<<endl;
    cout<<"=========================="<<endl;

    getline(Lec, nomuser,'\n');
	}
	Lec.close();
	}

	else
	cout<<"El archivo no se pudo abrir"<<s;
	system ("pause");
	
}

void buscarp(ifstream &Lec)
{
	system("cls");

	Lec.open("Empleados.txt",ios::in);
	string mmaquina;
	bool encontrado = false;
	cout<<"Digite No. Maquina: ";
	cin>>mmaquina;
	Lec>>nomuser;
	while(!Lec.eof() && !encontrado)
	{
		Lec>>direc;
		Lec>>ced;
		Lec>>cel;
		Lec>>tel;
		Lec>>cargo;
		Lec>>edad;
		Lec>>sex;
		Lec>>turno;
		Lec>>correo;
		Lec>>sueldoini;
		Lec>>maquina;
		Lec>>clave;

		if (maquina == mmaquina)
		{
			cout<<"Nombre-----:"<<nomuser<<endl;
			cout<<"Direccion--:"<<direc<<endl;
			cout<<"Cedula-----:"<<ced<<endl;  
			cout<<"Celular----:"<<cel<<endl;  
			cout<<"Telefono---:"<<tel<<endl;  
			cout<<"Cargo------:"<<cargo<<endl;
			cout<<"edad-------:"<<edad<<endl; 
			cout<<"Sexo-------:"<<sex<<endl;  
			cout<<"Turno------:"<<turno<<endl;
			cout<<"correo-----:"<<correo<<endl;
			cout<<"Sueldo-----:"<<sueldoini<<endl;
			cout<<"Maquina----:"<<maquina<<endl;
			cout<<"clave------:"<<clave<<endl;

			encontrado = true;
		}

		Lec>>nomuser;

		}
		Lec.close();
	if(!encontrado)
	{
	cout<<"dato no encontrado"<<s;
	system("pause");
	}
	system ("pause");

}

	void modificarp(ifstream &Lec)
	{
		system("cls");
		string nomaux;
		string mcorreo;
		string mcargo;
		string mmaquina;
		string mnivel;
		string msueldo;

		Lec.open("Empleados.txt",ios::in);
		ofstream aux("auxiliar.txt",ios::out);
		if (Lec.is_open())
		{
			cout<<"Maquina---:";
			cin>>mmaquina;
			Lec>>nomuser;
			while(!Lec.eof())
			{
				Lec>>direc;
				Lec>>ced;
				Lec>>cel;
				Lec>>tel;
				Lec>>cargo;
				Lec>>edad;
				Lec>>sex;
				Lec>>turno;
				Lec>>correo;
				Lec>>sueldoini;
				Lec>>maquina;
				Lec>>clave;

				if (maquina==mmaquina)
				{
					cout<<"Nuevo Nombre---:";
					cin>>nomaux;
					aux<< nomaux<< e <<direc << e <<ced << e<<cel<< e <<tel << e<<cargo << e<<edad<< e <<sex<< e <<turno<< e <<correo<<e<<sueldoini<<e<<maquina<<e<<clave<<endl;	
				}
				else
				{
					aux<< nomuser<< e <<direc << e <<ced << e<<cel<< e <<tel << e<<cargo << e<<edad<< e <<sex<< e <<turno<< e <<correo<<e<<sueldoini<<e<<maquina<<e<<clave<<endl;	
				}

				Lec>>nomuser;
			}
			Lec.close();
			aux.close();
			
		}
		
		else
		{
		cout<<"ERROR"<<s;
		remove("Empleados.txt");
		rename("auxiliar.txt","Empleados.txt");
		}
		system ("pause");

		
	}

	void borrarp(ifstream &Lec)
	{

		system("cls");
		string nomaux;
		string mcorreo;
		string mcargo;
		string mmaquina;
		string mnivel;
		string msueldo;

		Lec.open("Empleados.txt",ios::in);
		ofstream aux("auxiliar.txt",ios::out);
		if (Lec.is_open())
		{
			cout<<"Maquina---:";
			cin>>mmaquina;
			Lec>>nomuser;
			while(!Lec.eof())
			{
				Lec>>direc;
				Lec>>ced;
				Lec>>cel;
				Lec>>tel;
				Lec>>cargo;
				Lec>>edad;
				Lec>>sex;
				Lec>>turno;
				Lec>>correo;
				Lec>>sueldoini;
				Lec>>maquina;
				Lec>>clave;

				if (maquina==mmaquina)
				{
					cout<<"Borrando......";
					Sleep(2000);
				}
				else
				{
					aux<< nomuser<< e <<direc << e <<ced << e<<cel<< e <<tel << e<<cargo << e<<edad<< e <<sex<< e <<turno<< e <<correo<<e<<sueldoini<<e<<maquina<<e<<clave<<endl;	
				}

				Lec>>nomuser;
			}
			Lec.close();
			aux.close();
		}
		else
		{
		
		cout<<"ERROR"<<s;
		remove("Empleados.txt");
		rename("auxiliar.txt","Empleados.txt");
		}
		system ("pause");


	}

////////////////////////////////////////////////PRODUCTOS

	void agregarpr(ofstream &Lec)
	{
		string e=" ";

	system ("cls");

	espr.open("Productos.txt",ios::out|ios::app);

	if(espr.is_open())
	{
	cout<<"========================"<<s;
	cout<<"    Ingresar Productos  "<<s;
	cout<<"========================"<<s;

	//para ignorar la ultima instruccion del getline

	/////////////////////////////ENTRADA DE DATOS RELACIONADOS CON EL PRODUCTO/////////////////////////
	cout<<"Codigo---------:";
	cin>>id;     
	cout<<"Producto-------:";
	cin>>descripcion;
	cout<<"Categoria------:";
	cin>>categoria;
	cout<<"Precio Venta---:";
	cin>>preciov;  
	cout<<"Precion Compra-:";
	cin>>precioc;  
	cout<<"Proveedor------:";
	cin>>proveedor;
	//////////////////////////////////////////////////////////////////////////////////////////////////

	//if(verifica(ced))	
	espr<<id<<s;     
	espr<<descripcion<<s;
	espr<<categoria<<s;
	espr<<preciov<<s;  
	espr<<precioc<<s;  
	espr<<proveedor<<s;
	espr.close();
	}

	else
	{
		cout<<"El archivo no se pudo abrir"<<s;
	}
		system ("pause");

	
	}
	
	
	void verpr(ifstream &Lec)
	{
		system ("cls");

	Lec.open("Productos.txt",ios::in);

	if(Lec.is_open())
	{
	cout<<"========================"<<s;
	cout<<"Productos de la Empresa"<<s;
	cout<<"========================"<<s;

	Lec>>descripcion;

	while(!Lec.eof())
	{
	/////////////////////////////////////////////////INTRODUCIENDO DATOS DE PRODUCTOS NUEVAMENTE//////////////////

	Lec>>id;     
	Lec>>descripcion;
	Lec>>categoria;
	Lec>>preciov;  
	Lec>>precioc;  
	Lec>>proveedor;	
	/////////////////////////////////////////////////ACCEDIENDO A DATOS DE desprcripcion/////////////////////////////////////

	cout<<"Codigo---------:"<<id<<s;
	cout<<"Producto-------:"<<descripcion<<s;
	cout<<"Categoria------:"<<categoria<<s;
	cout<<"Precio Venta---:"<<preciov<<s;
	cout<<"Precion Compra-:"<<precioc<<s;
	cout<<"Proveedor------:"<<proveedor<<s;

    cout<<"=========================="<<endl;
    Lec>>descripcion;

	}

	Lec.close();
	}

	else
	{
	
	cout<<"El archivo no se pudo abrir"<<s;
	}
		system ("pause");

	}
	
	
	void buscarpr(ifstream &Lec)
	{
		system("cls");

	Lec.open("Productos.txt",ios::in);
	int mid;
	bool encontrado = false;
	cout<<"Digite No. id: ";
	cin>>mid;
	Lec>>descripcion;
	while(!Lec.eof() && !encontrado)
	{

		Lec>>id;     
		Lec>>descripcion;
		Lec>>categoria;
		Lec>>preciov;  
		Lec>>precioc;  
		Lec>>proveedor;


		if (id == mid)
		{
			cout<<"Codigo---------:"<<id<<s;
			cout<<"Producto-------:"<<descripcion<<s;
			cout<<"Categoria------:"<<categoria<<s;
			cout<<"Precio Venta---:"<<preciov<<s;
			cout<<"Precion Compra-:"<<precioc<<s;
			cout<<"Proveedor------:"<<proveedor<<s;
			encontrado = true;
		}

		Lec>>descripcion;

	}
	Lec.close();
	if(!encontrado)
	{
	
	cout<<"dato no encontrado"<<s;
	}
	system("pause");	
	}
	
	void modificarpr(ifstream &Lec)
	{
	system("cls");
		string nomaux;
		int mid;

		Lec.open("Productos.txt",ios::in);
		ofstream aux("auxiliar.txt",ios::out);
		if (Lec.is_open())
		{
			cout<<"id---:";
			cin>>mid;
			Lec>>descripcion;
			while(!Lec.eof())
			{
				Lec>>id;     
				Lec>>categoria;
				Lec>>preciov;  
				Lec>>precioc;  
				Lec>>proveedor;

				if (id==mid)
				{
					cout<<"Nuevo Nombre---:";
					cin>>nomaux;
					aux<<nomaux<<e<<id<<e<<categoria<<e<<preciov<<e<<precioc<<e<<proveedor<<s;
				}
				else
				{
					aux<<descripcion<<e<<id<<e<<categoria<<e<<preciov<<e<<precioc<<e<<proveedor<<s;

				}

				Lec>>descripcion;
			}
			Lec.close();
			aux.close();
		}
		else
		{
		
		cout<<"ERROR"<<s;
		remove("Productos.txt");
		rename("auxiliar.txt","Productos.txt");	
		}
		system ("pause");

		
	}
	
	void borrarpr(ifstream &Lec)
	{
		system("cls");
		string nomaux;
		string mcorreo;
		string mcargo;
		int mid;
		string mnivel;
		string msueldo;

		Lec.open("Productos.txt",ios::in);
		ofstream aux("auxiliar.txt",ios::out);
		if (Lec.is_open())
		{
			cout<<"id---:";
			cin>>mid;
			Lec>>descripcion;
			while(!Lec.eof())
			{
				Lec>>id;     
				Lec>>descripcion;
				Lec>>categoria;
				Lec>>preciov;  
				Lec>>precioc;  
				Lec>>proveedor;


				if (id==mid)
				{
					cout<<"Borrando......";
					Sleep(2000);
				}
				else
				{
					aux<<id<<s;     
					aux<<descripcion<<s;
					aux<<categoria<<s;
					aux<<preciov<<s;  
					aux<<precioc<<s;  
					aux<<proveedor<<s;
				}

				Lec>>descripcion;
			}
			Lec.close();
			aux.close();
		}
		else
		{
		
		cout<<"ERROR"<<s;
		remove("Productos.txt");
		rename("auxiliar.txt","Productos.txt");
		}
			system ("pause");

		
	}
	
///////////////////////////////////////////////SERVICIOS
	
	
	void agregars(ofstream &Lec)
	{
		

	string e=" ";

	system ("cls");

	ess.open("Servicios.txt",ios::out|ios::app);

	if(ess.is_open())
	{
	cout<<"========================"<<s;
	cout<<"    Ingresar Servicios   "<<s;
	cout<<"========================"<<s;

	//para ignorar la ultima instruccion del getline

	/////////////////////////////ENTRADA DE DATOS RELACIONADOS CON EL PRODUCTO/////////////////////////
	cin.ignore();
	cout<<"Servicio-----------: ";
	getline(cin,serv,'\n');
	cout<<"Tipo de servicio---: ";
	getline(cin,tserv,'\n');	
	//getline(cin,tserv);
	cout<<"Descripcion--------: ";
	getline(cin,descripcionserv,'\n');
	cout<<"Precio Minimo----: ";
	cin>>preciomin;  
	cout<<"Precio Maximo----: ";
	cin>>preciomax;
	//////////////////////////////////////////////////////////////////////////////////////////////////

	//if(verifica(ced))	
	ess<<serv<<e<< tserv<<e<<descripcionserv<<e<<preciomin<<e<<preciomax;
	ess.close();
	}

	else
		cout<<"El archivo no se pudo abrir"<<s;
	
	system("pause");
	
	}
	
	
	void vers(ifstream &Lec)
	{
	system ("cls");

	Lec.open("Servicios.txt",ios::in);

	if(Lec.is_open())
	{
	cout<<"========================"<<s;
	cout<<"Servicios de la Empresa "<<s;
	cout<<"========================"<<s;

	Lec>>serv;

	while(!Lec.eof())
	{
	/////////////////////////////////////////////////INTRODUCIENDO DATOS DE PRODUCTOS NUEVAMENTE//////////////////
	
	Lec>>tserv;     
	Lec>>descripcionserv;
	Lec>>preciomin;
	Lec>>preciomax;  
	/////////////////////////////////////////////////ACCEDIENDO A DATOS DE desprcripcion/////////////////////////////////////

	cout<<"Servicio---------:"<<serv<<s;
	cout<<"Tipo de Servicio-:"<<tserv<<s;
	cout<<"Descripcion------:"<<descripcionserv<<s;
	cout<<"Precio Minimo----:"<<preciomin<<s;
	cout<<"Precio Maximo----:"<<preciomax<<s;

    cout<<"=========================="<<endl;
    Lec>>tserv;

	}

	Lec.close();
	}

	else
	cout<<"El archivo no se pudo abrir"<<s;
	system ("pause");
	}
	
	
	
	void buscars(ifstream &Lec)
	{
		system("cls");

	Lec.open("Servicios.txt",ios::in);
	string mserv;
	bool encontrado = false;
	cout<<"Digite tipo de Servicio: ";
	cin>>mserv;
	Lec>>serv;
	while(!Lec.eof() && !encontrado)
	{

		Lec>>tserv;     
		Lec>>descripcionserv;
		Lec>>preciomin;
		Lec>>preciomax;

		if (tserv == mserv)
		{
			cout<<"servicio---------:"<<serv<<s;
			cout<<"tipo de Servicio-------:"<<tserv<<s;
			cout<<"descripcion------:"<<descripcionserv<<s;
			cout<<"Precio minimo---:"<<preciomin<<s;
			cout<<"Precion maximo-:"<<preciomax<<s;
			encontrado = true;
		}

		Lec>>serv;

	}
	Lec.close();
	if(!encontrado)
	cout<<"dato no encontrado"<<s;
	system("pause");	
	}
	
	
	void modificars(ifstream &Lec)
	{
	system("cls");
		string nomaux;

		Lec.open("Servicios.txt",ios::in);
		ofstream aux("auxiliar.txt",ios::out);
		if (Lec.is_open())
		{
			cout<<"Servio---:";
			cin>>mserv;
			Lec>>serv;
			while(!Lec.eof())
			{
				Lec>>tserv>>e>>descripcionserv>>e>>preciomin>>e>>preciomax;

				if (tserv==mserv)
				{
					cout<<"Nuevo Nombre---:";
					cin>>nomaux;
					aux<<nomaux<<e<<tserv<<e<<descripcionserv<<e<<preciomin<<e<<preciomax<<s;
				}
				else
				{
					aux<<serv<<e<<tserv<<e<<descripcionserv<<e<<preciomin<<e<<preciomax<<s;

				}

				Lec>>serv;
			}
			Lec.close();
			aux.close();
		}
		else
		cout<<"ERROR"<<s;
		remove("Servicios.txt");
		rename("auxiliar.txt","Servicios.txt");	
	}
	
	
	
	void borrars(ifstream &Lec)
	{
		system("cls");
		string nomaux;

		Lec.open("Servicios.txt",ios::in);
		ofstream aux("auxiliar.txt",ios::out);
		if (Lec.is_open())
		{
			cout<<"Servicio---:";
			cin>>mserv;
			Lec>>serv;
			while(!Lec.eof())
			{
				Lec>>tserv;     
				Lec>>descripcionserv;
				Lec>>preciomin;  
				Lec>>preciomax;  



				if (tserv==mserv)
				{
					cout<<"Borrando......";
					Sleep(2000);
				}
				else
				{
					aux<<tserv<<s;     
					aux<<descripcionserv<<s;
					aux<<preciomin<<s;
					aux<<preciomax<<s;
					
					
				}     

				Lec>>serv;
			}
			Lec.close();
			aux.close();
		}
		else
		cout<<"ERROR"<<s;
		remove("Productos.txt");
		rename("auxiliar.txt","Productos.txt");
		
	}
	
	
	
	
	
	
/////////////////////////////////////////menu administrador
	void menuaprincipaldmin()
	{
	ifstream Lec;

	menup:
	int op;
	do
	{
		system ("cls");
		op = menuprincipal();
		switch(op)
		{
			
			case 1:
				verp(Lec);

			break;
			case 2:
				verpr(Lec);
			break;
			case 3:
				vers(Lec);
			break;
			case 4:
				system ("cls");
				int x;
						cout<<"------Mantenimientos----"<<s;
						cout<<"1.	Ajuste Personal"<<s;
						cout<<"2.	Ajuste Productos"<<s;
						cout<<"3.	Ajuste Servicios"<<s;
						cout<<"4.	salir"<<s;
						cout<<"Opcion"<<s;
						cin>>x;
						
				switch (x)
				{
					case 1: //personal
						system ("cls");
		
						
						cout<<"------M. PERSONAL----"<<s;
						cout<<"1.	Agregar personal"<<s;
						cout<<"2.	Buscar Personal"<<s;
						cout<<"3.	Modificar personal"<<s;
						cout<<"4.	Borrar Personal"<<s;
						cout<<"Opcion"<<s;
						cin>>x;
		
						switch (x)
						{
							case 1:
								agregarp(Esc);
							break;
							case 2:
								buscarp(Lec);
							break;
							case 3:
								modificarp(Lec);
							break;
							case 4: 
								borrarp(Lec);
							break;
						}
					break;
												
					case 2: // productos
						system ("cls");
						
						
						cout<<"------M. PRODUCTOS----"<<s;
						cout<<"1.	Agregar productos"<<s;
						cout<<"2.	Buscar productos"<<s;
						cout<<"3.	Modificar productos"<<s;
						cout<<"4.	Borrar productos"<<s;
						cout<<"Opcion"<<s;
						cin>>x;
		
						switch (x)
						{

							case 1:
								agregarpr(Esc);

							break;
							case 2:
								buscarpr(Lec);
							break;
							case 3:
								modificarpr(Lec);
							break;
							case 4: 
								borrarpr(Lec);
							break;
						}
					break;
					
					case 3:// SERVICIOS
						system ("cls");
		
						cout<<"------M. SERVICIOS----"<<s;
						cout<<"1.	Agregar Servicio"<<s;
						cout<<"2.	Buscar Servicio"<<s;
						cout<<"3.	Modificar Servicio"<<s;
						cout<<"4.	Borrar Servicio"<<s;
						cout<<"Opcion"<<s;
						cin>>x;
		
						switch (x)
						{
							case 1:
								agregars(Esc);
							break;
							case 2:
								buscars(Lec);
							break;
							case 3:
								modificars(Lec);
							break;
							case 4: 
								borrars(Lec);
							break;
						}
					break;
				}	
			break;
		}
	}
	while(op);
}
