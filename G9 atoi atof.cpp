//de string a numero

#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std ;

int main (){
	
	char cad []="132";
	char cad2[]="45.23";
	
	int  entero;
	float decimal;
	
	entero= atoi (cad);
	decimal= atof (cad2);
	
	cout<<cad<<endl;
	cout<<cad2<<endl;
	
	getch();
	return 0;
	
}
