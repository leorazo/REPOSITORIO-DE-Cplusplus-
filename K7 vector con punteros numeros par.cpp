//vector con punteros numeros par 

#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	
	int i;
	int vector [10];
	int *dir_punteros;
	
	for (i=0;i<10;i++)	
	{cout <<"el elemento "<<i+1<<" de 10"<<endl;
    cin>>vector [i];}
	
	dir_punteros=vector;  //aqui se hace la asignacion de puntero de todo el arreglo
	
	for (i=0;i<10;i++)	
	{	if (*dir_punteros%2==0)//se accede a la posicion 0 de inicio
		{cout <<"la posicion del array "<<i<<" que es elemento "<<*dir_punteros<<" en el espacio "<< dir_punteros<<endl;}
		
		dir_punteros++; //se hace el desplazamiento del puntero
	}
	
    
    getch();
    return 0;
    }
