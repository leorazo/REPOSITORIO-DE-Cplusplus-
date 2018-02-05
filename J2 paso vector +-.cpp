//paso de parametros tipo vector aumento
#include <iostream> 
#include <conio.h>   

using namespace std;  

void pedir ();
void cambiodesigno (int vector [] , int);
void mostrar (int vector [] , int);

int vector[100],tam;

int main () {
	
    pedir();
    cambiodesigno(vector , tam);
    mostrar(vector , tam);
    
    getch();
    return 0;
    }
    
     void pedir(){
    	
    	cout<<"de que tamaño sera el vector"<<endl;
		cin>>tam;
    	
    	for (int i=0;i<tam;i++)
		{cout<<"dijite los numeros del vector "<<i+1<<" de "<<tam<<endl;
		cin>>vector[i];}
    }
    
    	void cambiodesigno(int vector [] , int tam)
		{	
    	for (int i=0;i<tam;i++)
		{vector[i]=vector[i]*(-1);}
    	
    	
    	}
    	
    	void mostrar(int vector [] , int tam)
		{	
    	for (int 0=1;i<tam;i++)
		{cout<<vector[i]<<" ";}
    	
    	
    	}
    
