//strlen da el largo de la cadena de caracteres
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	char palabra []="leonardo";
	int largo=0;
	
	largo= strlen(palabra);
	
	cout<<"el largo de la cadena es " <<largo <<endl;
	
	getch();
	return 0;
	
}
