//adivinar numero aleatorio

#include <iostream>  
#include <stdlib.h>  
#include <time.h>  
#include <conio.h>


using namespace std;  

int main () {
	int numero , dato , contador=0;
	
	srand(time(NULL));
	dato=1+ rand()%(100);

	 do
	 {	cout<<"dijite un numero hasta adividar 1-100"<<endl;
		cin>>numero;
		
		
		if (numero > dato)
		{cout<<"dijite un numero menor"<<endl; }
		
		if (numero < dato)
		{cout<<"dijite un numero mayor"<<endl; }
	
		contador++;
	 }
	 
	 while(dato!=numero);
	 
	 	cout<<"adivino en " <<contador <<" intentos" <<endl;

	 
	 
	 getch();
    return 0;
    }
