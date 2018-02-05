//concatenar

#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std ;

int main (){
	
	char cad []="leonardo ";
	char cad2 []="razo";
	char cad3 [30];
	
	strcpy (cad3,cad);  //(vacio, lleno)
	
	strcat (cad3,cad2);  //(inicial , final)   se pega al inicial todo
	
	cout<<cad3;
	
	getch();
	return 0;
	
	
	
}
