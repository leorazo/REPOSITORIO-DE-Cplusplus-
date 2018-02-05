//creacion y recorrido de un vector
#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	//int numero [10];     asi se crea un vector vacio
	 int numero []= {1,2,3,4,5};
	 int suma=0,i;

	 for(i=0;i<5;i++)
	 {
		suma+=numero[i];
	
	 }
	  cout << "la suma es "<<suma;
	 
	 getch();
    return 0;
    }
