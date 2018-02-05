//matrices con punteros
#include <iostream> 
#include <conio.h>   
#include <string.h> 

using namespace std; 

void pedirdatos ();  //prototipo
void mostrar (int **,int,int); //prototipo **asi se mnarca que sare matriz

int **matriz,numfilas , numcolumnas; //variables globales

int main () {
	
	pedirdatos();//metodo sin parametros
   mostrar (matriz,numfilas,numcolumnas);//metodo con parametros
   
    
    getch();
    return 0;
    }
    
    void pedirdatos (){
    		
    cout <<"de cuantas filas la matriz"<<endl;
    cin>>numfilas;
    cout <<"de cuantas columnas la matriz"<<endl;
    cin>>numcolumnas;
    
    matriz=new int *[numfilas];					//asi se crea
    
    	for (int a=0;a<numfilas;a++)			// una mtriz
    	{matriz[a]=new int [numcolumnas];		// con punteros
    	}
    	
    	for (int i=0;i<numfilas;i++)		//entrada normal de matriz
    	{	for (int j=0;j<numcolumnas;j++)
    		{cout<<"digite el elemento ["<<i<<"] "<<" [" <<j<<"]"<<endl;
    		cin>>*(*(matriz+i)+j);		//de esta formna se hace el recorrido de espacio de bits
    		}
    	}	
    	
    }
    
    void mostrar (int **matriz,int numfilas,int numcolumnas){
    	for (int i=0;i<numfilas;i++)
    	{	for (int j=0;j<numcolumnas;j++)
    		{cout<<*(*(matriz+i)+j)<<" ";
    		}
    		cout<<endl;
    	}
    	
    	
    	
    }
