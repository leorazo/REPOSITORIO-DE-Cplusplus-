//mayor elemneto de un vector
#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	
	int tam;
	 
	cout <<"de que tamaño quiere el vector ";
	cin>>tam;
	
	 int numero[tam], mayor=-1000000;
	

	 for(int i=0;i<tam;i++)
	 {
	 	cout << "dijite la posicion  " <<i << " del vector" <<endl;
		 cin>>numero[i];
		 
		 if (mayor<numero[i]){mayor=numero[i];}
		 	
	 }
	  
	 	cout << "el numero mayor del arreglo es " <<mayor <<endl;
	
	 
	 getch();
    return 0;
    }
