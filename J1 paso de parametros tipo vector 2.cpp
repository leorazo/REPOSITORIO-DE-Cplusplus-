//paso de parametros tipo vector 2
#include <iostream> 
#include <conio.h>   

using namespace std;  

int vector[100],tam;   //vector y a que tamaño se va ajustar

void pedir();
int calsumar(int vector[],int tam);   //vector y tamaño del vector cuando se trnafiere el vector




int main () {
    
	pedir();
   cout<<"la suma del vector es "<<calsumar(vector,tam)<<endl; //funcion (nombredelvector , tamaño) 
    
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
    
    int calsumar(int vector[],int tam){   //tranferencia del vector
    	int suma;
    	
    	for (int x=0;x<tam;x++)
		{suma=suma+vector[x];}
		
		return suma;
		
    }
