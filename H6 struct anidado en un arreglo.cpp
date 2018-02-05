//struct anidado

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct DIRECCION{
	char direccion[20];
	char municipio[20];
	char estado[20];
};

struct empleado{
	char nombre[20];
	double salario;
	struct DIRECCION objDIRECCION;  // se debe de crear un objeto para hacer la llamada del struct
}arreempleados[2];

int main (){
	
	
	cout<<"vamos a rellenar las esructuras dentro de un vector" <<endl;
	
	for (int i=0;i<2;i++){
		
	cout<<"nombre "<<endl;
	cin.getline(arreempleados[i].nombre,20,'\n');
	cout<<"salario "<<endl;
	cin>>arreempleados[i].salario;
	cout<<"direccion "<<endl;
	cin.getline(arreempleados[i].objDIRECCION.direccion,20,'\n');
	cout<<"municipio "<<endl;
	cin.getline(arreempleados[i].objDIRECCION.municipio,20,'\n');
	cout<<"estado "<<endl;
	cin.getline(arreempleados[i].objDIRECCION.estado,20,'\n');
	
	cout<<endl;	
	}
	
	
	for (int i=0;i<2;i++){
	cout<<arreempleados[i].nombre<<endl;
	cout<<arreempleados[i].salario<<endl;
	cout<<arreempleados[i].objDIRECCION.direccion<<endl;
	cout<<arreempleados[i].objDIRECCION.municipio<<endl;
	cout<<arreempleados[i].objDIRECCION.estado<<endl;
	cout<<endl;
	
	}
	
	
	getch();
	return 0;
	
	
}
