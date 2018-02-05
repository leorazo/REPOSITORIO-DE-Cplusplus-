//pilas agregar dato

#include <iostream> 
#include <conio.h>   
#include <stdlib.h>  

using namespace std;  

struct nodo{
	int dato;
	nodo *siguiente;
};

void agregarpila (nodo *& , int);
void sacarpila (nodo *& , int &);

int main () {
	nodo *pila=NULL;
	
	int dato;
	
    cout <<"digite el primer numero"<<endl;
    cin>>dato;
    agregarpila (pila ,dato);
    
    cout <<"digite el segundo numero"<<endl;
    cin>>dato;
    agregarpila (pila ,dato);
    
    
    cout <<"sacando elementos de la pila "<<endl;
    
    while (pila!=NULL)
    {
    	sacarpila (pila,dato);	
    	if (pila!=NULL)
    		{cout<<dato<<" , "<<endl;
    		}
    		else {cout<<" . "<<endl;}
    		
    }
    
    
    
    getch();
    return 0;
    }
    
    
    void agregarpila (nodo *&pila , int n){
    	
    	nodo *nuevonodo = new nodo ();
    	nuevonodo->dato=n;
    		nuevonodo->siguiente=pila;
    		pila=nuevonodo;
    		
    		cout<<"el elemento "<<n<<" fue agregado correctamente"<<endl;
    	
    }
    
    void sacarpila (nodo *&pila , int &n){
    	 nodo *aux =pila;
    	 n=aux->dato;
    	 pila=aux->siguiente;
    	 delete aux;
    	
    	
    	
    }
