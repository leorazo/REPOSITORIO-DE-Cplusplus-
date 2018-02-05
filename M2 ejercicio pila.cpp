#include <iostream> 
#include <conio.h>   

using namespace std;  

struct nodo {
	int dato;
	nodo *siguiente; //puntero tipo nodo
	
};

void agregarpila (nodo *& , int); // se pasara un tipo nodo por referencia
void sacarpila (nodo *& , int&);										//int por refenercia

int main () {
	
	nodo *pila=NULL;  //puntero tipo nodo ==null
	int dato;
	char rpt;
	
	do {
		cout <<"digite un dato"<<endl;
    cin>>dato;
    agregarpila(pila,dato);
		
		
		 cout <<"deseas agregar otro elemento a la pila (s/n) "<<endl;
    cin>>rpt;
	} 
	
	while ((rpt=='s')||(rpt=='S'));
	
	
	cout <<"sacando elementos de pila"<<endl;
	
	while (pila!=NULL)
	{
		sacarpila(pila,dato);
		if (pila!=NULL)
		{cout <<dato<<" , ";}
		else{cout <<dato<<".";}
		
	}
    
    getch();
    return 0;
    }
    
    
    
    void agregarpila (nodo *&pila , int n){
    	
    	nodo *nuevonodo=new nodo (); //arreglo dinamico con punteros tipo nodo
    	nuevonodo->dato=n;			//arreglo dinamico con punteros -> (entrada a espacio) dato = n
    	nuevonodo->siguiente=pila;	//arreglo dinamico con punteros siguiente=pila
    	pila=nuevonodo;
    	
    	cout <<"el elemento "<<n <<" a sido agreggado a pila correctamente"<<endl;
    }
    void sacarpila (nodo *&pila , int &n){
    	
    	nodo *aux=pila;
    	n=aux->dato;
    	pila=aux->siguiente;
    	delete aux;
    	
    }
    
    
