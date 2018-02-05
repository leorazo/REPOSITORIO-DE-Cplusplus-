//vector con punteros menor

#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	
	int i,tam,nummenor,posmenor;
	int *dir_punteros;
	
	cout <<"de que tamaño quieres el arreglo "<<endl;
    cin>>tam;
    
   	int vector [tam];
    
	
	for (i=0;i<tam;i++)	
	{cout <<"el elemento "<<i+1<<" de "<<tam<<endl;
    cin>>vector [i];}
	
	dir_punteros=vector;  //aqui se hace la asignacion de puntero de todo el arreglo
	nummenor=999999999;
	
	
	
	for (i=0;i<tam;i++)
			
	{	if (*dir_punteros<nummenor)
		{nummenor=*dir_punteros;
		posmenor=i;}
		
		dir_punteros++;
	}
	
	cout <<"la posicion del array "<<posmenor<<" que es elemento "<<nummenor<<" en el espacio "<< dir_punteros
	<<"es el elemento menor"<<endl;
	
    
    getch();
    return 0;
    }
