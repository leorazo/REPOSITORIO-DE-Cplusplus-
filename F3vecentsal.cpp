//escritura y lectura de un vector 
#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	
	int tam;
	 
	cout <<"de que tamaño quiere el vector ";
	cin>>tam;
	
	 int numero[tam];
	

	 for(int i=0;i<tam;i++)
	 {
	 	cout << "dijite la posicion  " <<i << " del vector" <<endl;
		 cin>>numero[i];
	
	 }
	 
	  for(int a=0;a<tam;a++)
	 {
	 	cout << "posicion  " <<a << " del vector tiene un valor de " <<numero[a] <<endl;
	
	 }
	 
	
	 
	 getch();
    return 0;
    }
