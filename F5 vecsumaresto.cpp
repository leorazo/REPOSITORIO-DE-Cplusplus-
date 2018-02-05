//arreglo y ver si un elemento es igual a la suma del resto del arreglo
#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	
	int tam;
	 
	cout <<"de que tamaño quiere el vector ";
	cin>>tam;
	
	 int numero[tam], mayor=-1000000, mayorindice;
	

	 for(int i=0;i<tam;i++)
	 {
	 	cout << "dijite la posicion  " <<i << " del vector" <<endl;
		 cin>>numero[i];
		 
		 if (mayor<numero[i]){mayorindice=i;}
		 	
	 }
	  
	 	cout << "la posicion mayor del arreglo es " <<mayorindice <<endl;
	
	 
	 getch();
    return 0;
    }
