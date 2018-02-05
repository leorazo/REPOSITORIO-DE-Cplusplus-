//arreglo de caracteres
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	char palabra []="leonardo";
	char palabra2 []={'l','e','o','n','a','r','d','o'};
	char nombre [20];
	
	cout<<palabra <<endl;
	cout<<palabra2 <<endl;
	
	
	cout<<"escribe tu nombre" <<endl;
	//cin>>nombre;   deja de capturar datos en el primer espacio vacio que encuentra
	//gets (nombre);   no respeta los espacios del arreglo y agarra de mas
	cin.getline(nombre,20,'\n');   //(arreglo, capacidad,como finaliza)
	
	cout<<nombre<<endl;
	
	getch();
	return 0;
	
}
