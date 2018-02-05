//arbol binario de busqueda
#include <iostream> 
#include <conio.h>   
#include <stdlib.h> 

using namespace std;  

struct nodo {
	int dato;
	nodo *der;
	nodo *izq;
};

void menu();
nodo *crearnodo (int);
void insertarnodo(nodo *& , int);

nodo *arbol =NULL;


int main () {
    
    menu();
    
    getch();
    return 0;
    }
    
    void menu (){
    	
    	int dato , opcion ;
	
		do {
			cout<<"menu"<<endl;
			cout<<"1. insertar nodo"<<endl;
			cout<<"2. salir"<<endl;
			cout<<"opcion:";
			cin>>opcion;
			
			switch (opcion){
			
			case 1: cout <<"digite un numero";
			cin>>dato;
			insertarnodo(arbol , dato);
			system ("pause");
			break;
			}
			
			system ("cls");
		}
		
		
		
		while (opcion != 2);
	
	}
    
    nodo *crearnodo (int n) {
    	nodo *nuevonodo = new nodo ();
    	
    	nuevonodo->dato=n;
    	nuevonodo->der=NULL;
    	nuevonodo->izq=NULL;
    	
    	return nuevonodo;
    	
    }
    
    void insertarnodo(nodo *& arbol , int n ){
    	
    	if (arbol=NULL)
    	{nodo *nuevonodo = crearnodo(n);
		arbol=nuevonodo;}
    	
    	else {int valorraiz =arbol->dato;
			if (n <valorraiz)
			{insertarnodo(arbol->izq,n);}
			
			else {insertarnodo(arbol->der,n);} 
			
		}
    	
    	   	
    	
    }
