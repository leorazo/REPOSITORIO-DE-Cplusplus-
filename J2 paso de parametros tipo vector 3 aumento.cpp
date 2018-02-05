//paso de parametros tipo vector aumento
#include <iostream> 
#include <conio.h>   

using namespace std;  

void pedir ();
void aumento (int vector [] , int);

int vector[100],tam;

int main () {
	
    pedir();
    aumento(vector , tam);
    
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
    
    	void aumento(int vector [] , int tam)
		{	int prueba=0,p=tam-1;
    	
    	for (int i=1;i<tam;i++)
		{if (vector[i-1]<vector[i])
    	{prueba++;}}
    	
    	if(prueba==p)
    	{cout<<" esta en incremento"<<endl;}
    	else{cout<<"no esta en incremento"<<endl;}
    	
    	}
    
    
    
