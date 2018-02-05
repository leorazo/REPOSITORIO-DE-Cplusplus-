//estructuras

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


	struct persona {
		
		char nombre [20];   //coleccion de datos diferentes
		int edad;
	}
	
	persona1={"leonardo", 20},persona2;  //"creas objetos"

int main ()
{
	cout<<"nombre1 " <<persona1.nombre<<endl;  //asi se accede a la info
	cout<<"edad1 " <<persona1.edad<<endl;
	
	cout<<"vamos a rellenar a la persona 2"<<endl;
	cout<<"nombre "<<endl;
	cin.getline(persona2.nombre,20,'\n');  //por ser un arreglo asi se mete
	cout<<"edad " <<endl;    //asi se rellena
	cin>>persona2.edad;
	
	cout<<"nombre2 " <<persona2.nombre<<endl;
	cout<<"edad2 " <<persona2.edad<<endl;
	
	getch();
	return 0;
	
	
	
}
	
	
