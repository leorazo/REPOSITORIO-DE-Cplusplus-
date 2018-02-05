//paso de parametros tipo vector aumento
#include <iostream> 
#include <conio.h>   

using namespace std;  

void mostrar (int matriz [2][3] , int, int);

int vector[100],tam;

int main () {
	
	const int numfilas=2;
	const int numcolumnas=3;
	int matriz [numfilas][numcolumnas]={{1,2,3},{4,5,6}};
	
    mostrar(matriz,numfilas,numcolumnas);
    
    getch();
    return 0;
    }
    

    	
    	void mostrar(int matriz [2][3] , int numfilas,int numcolumnas)
		{	
    	for (int i=0;i<numfilas;i++)
		{for (int x=0;x<numcolumnas;x++){
			cout<<matriz [i][x]<<" ";
			}
			cout<<endl;
		}
    	
    	
    	}
    
