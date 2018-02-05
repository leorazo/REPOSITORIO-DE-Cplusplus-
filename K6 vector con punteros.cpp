//vector con punteros

#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	
	int i;
	int vector []={1,2,3,4,5};
	int *dir_punteros;
	
	dir_punteros=vector;  //aqui se hace la asignacion de puntero de todo el arreglo
	
	for (i=0;i<5;i++)
	{cout<<"el elemento del vector ["<<i <<"]: "<<*dir_punteros++ <<endl;}  //*dir_punteros++ asi recorres
																			// el contenido del arreglo
		for (i=0;i<5;i++)
	{cout<<"el elemento del vector "<<vector [i]<<" com posicion "<<i<<" tiene una direccion de memoria"<<dir_punteros++ <<endl;}
																					//dir_punteros++ asi recorres
																					// los punteros del arreglo
	
    
    getch();
    return 0;
    }
