#include<iostream>
#include<conio.h>

using namespace std;

struct persona {
	 char nombre [20];
	 int edad;
	
}p1;

void pedir();
void mostrar(persona);  //dentro de los parametros va el nombre de la estructura
						//las misma cantidad de objetos que se vayan a manipular


int main (){
	
	pedir();
	 mostrar(p1);  //el "objeto de la estructura que se creo previamente"
		
	
	return 0;
	getch();
}

void pedir (){
	cout<<"escriba su nombre"<<endl;
	cin.getline (p1.nombre,20,'\n');
	cout<<"escriba su edad"<<endl;
	cin>>p1.edad;	
	
}

void mostrar(persona p1){   //nombre d ela estructura y de la variable loca que se usaria para tranladar
		cout<<"el nombre es "<<p1.nombre<<endl;						//los datos de un metodo a tro
		cout<<"la edad es "<<p1.edad<<endl;
	
}



