//copiar d euna arreglo a otro
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char nombre []="leonardo";
	char copia [20];
	
	strcpy (copia,nombre);   //strcpy (vacio,lleno);
	
	cout<<nombre <<endl;
	
	cout<<copia <<endl;
	
	
	getch();
	return 0;
	
}
