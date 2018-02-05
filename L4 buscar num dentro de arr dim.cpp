//buscar un numero dentro de un arreglo de punteros
#include <iostream> 
#include <conio.h>   

using namespace std;  

void pedirdatos();
void existe (int *,int);

int numdatos , *punvec,buscado;

int main () {
	
	 pedirdatos();
	 existe (punvec,numdatos);
    
    
    getch();
    return 0;
    }
    
    void pedirdatos(){
    	
    cout <<"de que tamaño quiere el arreglo dinamico"<<endl;
    cin>>numdatos;
    
    punvec = new int [numdatos];
    
    for (int i=0;i<numdatos;i++)
    {cout <<"mete el dato "<<i+1<<" de "<<numdatos <<endl;
    cin>>*(punvec+i);}
    	
    }
    
    void existe (int *punvec , int numdatos ){
    	
    	
    	cout <<"que numero buscas? "<<endl;
    	cin>>buscado;
    	
    	for (int i=0;i<numdatos;i++)
    	{	if (*(punvec+i)==buscado)
    		{cout<<"si existe dentro del arreglo"<<endl;}
    	}
}
