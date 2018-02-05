//copiar d euna arreglo a otro
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char nombre []="leonardo";
	char nombre2 []= "leonarod";
	
	int strcomp=0;
	
	if (strcmp (nombre2,nombre)==0)
	{cout<<"son iguales"<<endl;}
	else {cout<<"no son iguales"<<endl;}
	
	strcomp=strcmp (nombre2,nombre);
	
	cout<<strcomp;
	

	
	
	getch();
	return 0;
}
