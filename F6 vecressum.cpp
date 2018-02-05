//si alguna posicion es la suma de las  posiciones restantes
#include <iostream>  
#include <conio.h>

using namespace std;  

int main () {
	
	int tam,suma=0,contador=0,i,ii;
	 
	cout <<"de que tamaño quiere el vector ";
	cin>>tam;
	
	 int numero[tam];
	

	 for(int i=0;i<tam;i++)
	 {
	 	cout << "dijite la posicion  " <<i << " del vector" <<endl;
		 cin>>numero[i];
		suma=suma+numero[i];	 	
	 }
	 
	 for (ii=0;ii<tam;ii++)
	 	{	if (numero[ii]==(suma-numero[ii]))
	 		{contador++;}
		 }
	 
	  
	 	cout << "numeros que son la suma del resto de los elementos " <<contador <<endl;
	
	 
	 getch();
    return 0;
    }
