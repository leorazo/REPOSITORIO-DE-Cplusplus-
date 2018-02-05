//transsmision de arreglos

#include <iostream> 
#include <conio.h>  
#include <stdlib.h> 

using namespace std;  

int max(int * , int); //(de puntero a arreglo y tamaño del arreglo)

int main () {
	const int numele=5;
	
	int arreglo [numele]={1,2,3,4,5};
	
    cout <<"el mayor eleemnto del arreglo es "<<max (arreglo,numele)<<endl; //(se manda arreglo para y    tamaño)
 																				//hacerlo puntero
    
    getch();
    return 0;
    }
    
    int max(int *dirvector , int numele){  //aqui el arreglo se esta haciendo un puntero
    	int max=0;
    	
    	for (int i=0 ;i<numele;i++)
    	{ if (max<*(dirvector+i))
    		{max=*(dirvector+i);
    		}
		}
		
		return max;
    	
    }
