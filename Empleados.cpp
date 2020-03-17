#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <windows.h>

using namespace std;
	
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
	string s = "\n";
	string e=" ";


void color(int col)
{
SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),col);
}


int menu(){
	int x;
	//color(9)
	cout<<"Bienvenido"<<endl<<endl;
	int col(10);
	cout<<"1. Agregar persona"<<endl;
	cout<<"2. ver personal"<<endl;
	cout<<"3. Ajustes Personal"<<endl;
	cout<<"Opcion"<<endl;
	cin>>x;
	return x;

}

/* bool verifica(string ced)
{
	ifstream leer("Empleados.txt",ios::in);
	
	string nomuser;
	string sex;//masculino o femenino
	string direc;
	string correo;
	string cel;
	string tel;
	string turno;//matutino o nocturno
	string cargo;
	double sueldoini;
	int edad;
	
	leer>>nomuser;
	while(!leer.eof())
	{
		leer>>ced;
		leer>>cel;
		leer>>tel;
		
		if (ced==ced)
		{
			leer.close();
			return false;
		}
		leer>>nomuser;

	}
	leer.close();
	return true;
}

*/

void agregar(ofstream &es)
{

	string e=" ";
	
	system ("cls");
		
	es.open("Empleados.txt",ios::out|ios::app);
	
	if(es.is_open())
	{
	cout<<"========================"<<s;
	cout<<"    Ingresar Personal   "<<s;
	cout<<"========================"<<s;
	
	cin.ignore();
	cout<<"Nombre----: ";
	getline(cin,nomuser);
	cout<<"Direccion-: ";
	getline(cin,direc);
	//para ignorar la ultima instruccion del getline
	cout<<"Cedula----: ";
	cin>>ced;
	cout<<"Celular---: ";
	cin>>cel;	
	cout<<"Telefono--: ";
	cin>>tel;
	cout<<"Cargo-----: ";
	cin>>cargo;
	cout<<"Edad------: ";
	cin>>edad;
	cout<<"Sexo(M/F)-: ";
	cin>>sex;
	cout<<"Turno(M/T): ";
	cin>>turno;
	cout<<"Correo----: ";
	cin>>correo;
	cout<<"Sueldo----: ";
	cin>>sueldoini;	
	cout<<"Maquina---: ";
	cin>>maquina;
	cout<<"Clave-----: ";
	cin>>clave;
	//if(verifica(ced))
	es<< nomuser<< e <<direc << e <<ced << e<<cel<< e <<tel << e<<cargo << e<<edad<< e <<sex<< e <<turno<< e <<correo<<e<<sueldoini<<e<<maquina<<e<<clave<<endl;	
	
	es.close();
	}
	
	else
		cout<<"El archivo no se pudo abrir"<<s;

}
	
	
void verpersonal(ifstream &Lec)
{	
	system ("cls");
	
	Lec.open("Empleados.txt",ios::in);
	
	if(Lec.is_open())
	{
	cout<<"========================"<<s;
	cout<<"Personal de la empresa"<<s;
	cout<<"========================"<<s;

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
    cout<<"=========================="<<endl;
    Lec>>nomuser;
    
	}
	
	Lec.close();
	}
	
	else
	cout<<"El archivo no se pudo abrir"<<s;
	system ("pause");



	
}


void buscarpersonal(ifstream &Lec)
{
	system("cls");
	
	Lec.open("Empleados.txt",ios::in);
	int mmaquina;
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
	cout<<"dato no encontrado"<<s;
	system("pause");
	
}

	void modificar(ifstream &Lec)
	{
		system("cls");
		string nomaux;
		string mcorreo;
		string mcargo;
		int mmaquina;
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
		cout<<"ERROR"<<s;
		remove("Empleados.txt");
		rename("auxiliar.txt","Empleados.txt");
		
	}
	
	void borrarp(ifstream &Lec)
	{
		
		system("cls");
		string nomaux;
		string mcorreo;
		string mcargo;
		int mmaquina;
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
		cout<<"ERROR"<<s;
		remove("Empleados.txt");
		rename("auxiliar.txt","Empleados.txt");
		
	}
 
int main()
{
	
 
	ofstream Esc;
	ifstream Lec; 
	int op;
	do
	{
		system ("cls");
		op = menu();
		switch(op)
		{
			
			case 1:
				agregar(Esc);
			break;
			case 2:
				verpersonal(Lec);
			break;
			case 3:
				system ("cls");

				int x;
				cout<<"------Mantenimiento----"<<s;
				cout<<"1.	Buscar Personal"<<s;
				cout<<"2.	Modificar personal"<<s;
				cout<<"3.	Borrar Personal"<<s;
				cout<<"Opcion"<<s;
				cin>>x;
				
				switch (x)
				{
					case 1:
						buscarpersonal(Lec);
					break;
					case 2:
						modificar(Lec);
					break;
					case 3: 
						borrarp(Lec);
					break;
				}
				
			break;
		}
		
	}
	while(1);
	return 0;
	
}

