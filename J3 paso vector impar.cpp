//paso de parametros de vectores impar

#include <iostream> 
#include <conio.h>   

using namespace std;  

void recibir ();
void imprimirimpar (int vector [], int);

int vector [100],tam;

int main () {
	
	recibir ();
    imprimirimpar (vector,tam);
    
    
    getch();
    return 0;
    }
    
    void recibir (){
    	cout <<"de que tamaño quiere el vector"<<endl;
    	cin>>tam;
    	
    	for (int i ;i<tam;i++){
    		cout <<"introduzca elemento " <<i+1 <<" de " << tam<<" del vector"<<endl;
    		cin>>vector[i];
    	}	
    	
    }
    
    void imprimirimpar (int vector [], int tam){
    	
    	cout <<"se mostraran los elemntos impares"<<endl;
    	
    	for (int i ;i<tam;i++){
    		if ((vector[i]%2)==1){
    			cout<<vector[i]<<endl;
    		}
    	}
    	
    	
    	
    }
    
