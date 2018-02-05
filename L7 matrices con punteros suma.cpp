//matrices con punteros suma
#include <iostream> 
#include <conio.h>   
#include <string.h> 

using namespace std; 

void pedirdatos ();  //prototipo
void sumar (int**,int**,int**);
void mostrar (int**,int**,int**); //prototipo **asi se mnarca que sare matriz

int **matriz1,**matriz2,**matriz3; //variables globales

int main () {
	
	pedirdatos();//metodo sin parametros
	sumar(matriz1,matriz2,matriz3);
   mostrar (matriz1,matriz2,matriz3);//metodo con parametros
    
    getch();
    return 0;
    }
    
    void pedirdatos (){
    
    matriz1=new int *[3];
	matriz2=new int *[3];
	matriz3=new int *[3];					//asi se crea
    
    	for (int a=0;a<3;a++)			// una mtriz
    	{matriz1[a]=new int [3];
		matriz2[a]=new int [3];
		matriz3[a]=new int [3];		// con punteros
    	}
    	
    	for (int i=0;i<3;i++)		//entrada normal de matriz
    	{	for (int j=0;j<3;j++)
    		{cout<<"digite el elemento ["<<i<<"] "<<" [" <<j<<"]" <<"de la primera matriz"<<endl;
    		cin>>*(*(matriz1+i)+j);	
			*(*(matriz3+i)+j)=0;		//de esta formna se hace el recorrido de espacio de bits
    		}
    	}
		
		for (int i=0;i<3;i++)		//entrada normal de matriz
    	{	for (int j=0;j<3;j++)
    		{cout<<"digite el elemento ["<<i<<"] "<<" [" <<j<<"]" <<"de la segunda matriz"<<endl;
    		cin>>*(*(matriz2+i)+j);		//de esta formna se hace el recorrido de espacio de bits
    		}
    	}	
    	
    }
    
     void sumar (int **matriz1,int **matriz2,int **matriz3){
    	for (int i=0;i<3;i++)
    	{	for (int j=0;j<3;j++)
    		{*(*(matriz3+i)+j)=*(*(matriz1+i)+j)+*(*(matriz2+i)+j);
    		}

    	}
    	
    	
    	
    }
    
    void mostrar (int **matriz1,int **matriz2,int **matriz3){
    	
    	cout<<"el suma de las matrices es "<<endl;
    	for (int i=0;i<3;i++)
    	{	for (int j=0;j<3;j++)
    		{cout<<*(*(matriz3+i)+j)<<" ";
    		}
    		cout<<endl;
    	}
    	
    	
    	
    }
