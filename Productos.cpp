#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <windows.h>

using namespace std;
	
	double id=0;
	string descripcion;
	string categoria;
	double preciov;
	double precioc;
	string proveedor;
	
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
	cout<<"1. Agregar Producto"<<endl;
	cout<<"2. ver Productos"<<endl;
	cout<<"3. Ajustes Productos"<<endl;
	cout<<"Opcion"<<endl;
	cin>>x;
	return x;

}

/* bool verifica(string ced)
{
	ifstream leer("descripcion.txt",ios::in);
	
	string productos;
	string sex;//masculino o femenino
	string direc;
	string correo;
	string cel;
	string tel;
	string turno;//matutino o nocturno
	string cargo;
	double sueldoini;
	int edad;
	
	leer>>descripcion;
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
		leer>>productos;

	}
	leer.close();
	return true;
}

*/

void agregar(ofstream &es)
{

	string e=" ";
	
	system ("cls");
		
	es.open("Productos.txt",ios::out|ios::app);
	
	if(es.is_open())
	{
	cout<<"========================"<<s;
	cout<<"   Ingresar Productos   "<<s;
	cout<<"========================"<<s;
	
	//para ignorar la ultima instruccion del getline
	
	/////////////////////////////ENTRADA DE DATOS RELACIONADOS CON EL PRODUCTO/////////////////////////
	cout<<"Producto-------:";
	cin>>descripcion;
	cout<<"Codigo---------:";
	cin>>id;     
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
	es<<descripcion<<e<<id<<e<<categoria<<e<<preciov<<e<<precioc<<e<<proveedor<<s;
	
	es.close();
	}
	
	else
		cout<<"El archivo no se pudo abrir"<<s;

}
	
/////////////////////////////////////////////////////FUNCION VER PRODUCTOS///////////////////////
void verproductos(ifstream &Lec)
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
	Lec>>categoria;
	Lec>>preciov;  
	Lec>>precioc;  
	Lec>>proveedor;	
	/////////////////////////////////////////////////ACCEDIENDO A DATOS DE descripcion/////////////////////////////////////
	
	cout<<"Producto-------:"<<descripcion<<s;
	cout<<"Codigo---------:"<<id<<s;
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
	cout<<"El archivo no se pudo abrir"<<s;
	system ("pause");



	
}

////////////////////////////////////////////////////////////FUNCION BUSCAR////////////////
void buscarpersonal(ifstream &Lec)
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
		Lec>>categoria;
		Lec>>preciov;  
		Lec>>precioc;  
		Lec>>proveedor;
			
			
		if (id == mid)
		{	
			cout<<"Producto-------:"<<descripcion<<s;
			cout<<"Codigo---------:"<<id<<s;
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
	cout<<"dato no encontrado"<<s;
	system("pause");
	
}
/////////////////////////////////////////////////////FUNCION MODIFICAR///////////////////
	void modificar(ifstream &Lec)
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
		cout<<"ERROR"<<s;
		remove("Productos.txt");
		rename("auxiliar.txt","Productos.txt");
		
	}
	
	void borrarp(ifstream &Lec)
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
				aux<<descripcion<<e<<id<<e<<categoria<<e<<preciov<<e<<precioc<<e<<proveedor<<s;

				}
			
				Lec>>descripcion;
			}
			Lec.close();
			aux.close();
		}
		else
		cout<<"ERROR"<<s;
		remove("Productos.txt");
		rename("auxiliar.txt","Productos.txt");
		
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
				verproductos(Lec);
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

