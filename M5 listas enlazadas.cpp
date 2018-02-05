#include <iostream> 
#include <conio.h>   
#include <stdlib.h> 

using namespace std; 

struct nodo {
	int dato;
	nodo *siguiente;
	
} ;
void menu();
void insertarlista (nodo *& , int);
void mostrarlista (nodo *); 
nodo * lista =NULL;	

int main () {
	
	
		menu ();
    
    getch();
    return 0;
    }
    
    void insertarlista (nodo *& lista , int n ){
    	
    	nodo *nuevonodo= new nodo ();
    	nuevonodo ->dato=n;
    	
    	nodo *aux1=lista;
    	nodo *aux2;
    	
    	while ((aux1!=NULL)&&(aux1->dato<n))
    	{aux2=aux1;
    	aux1=aux1->siguiente;
    	}
    	
    	if (lista==aux1)
    	{lista=nuevonodo;
    	}
    	else {aux2->siguiente=nuevonodo;
    	}
		nuevonodo->siguiente=aux1;
    	
    	cout <<"elemento "<<n<<" insertado correctamente"<<endl;
    	
    }
    
    void mostrarlista (nodo *lista){
    	
    	nodo *actual =new nodo ();
    	actual=lista;
    	while (actual!=NULL)
    	{
    		cout<<actual->dato<<" ->";
    		actual=actual->siguiente;
    	}
    	
    	
    	
    }
    
    
    void menu (){

	int opc,dato;
	
	do {
		cout<<"\t menu: "<<endl;
		cout<<"1 insertar un elemento en la lista "<<endl;
		cout<<"2 mostrar todos los elementos de la lista"<<endl;
		cout<<"3 salir"<<endl;
		cout<<"opcion: "<<endl;
		cin>>opc;
		
		switch (opc)
		{
			case 1:cout<<"ingrese un numero para agregar a la lista"<<endl;
			cin>>dato;
			insertarlista(lista, dato);
			system ("pause");
			break;
			
			case 2:cout<<"mostrando los elementos de la lista"<<endl;
			mostrarlista(lista);
			system ("pause");
			break;
			
			
			case 3: 
			break;
			
		}
		system ("cls");
	}
	
	while (opc!=3);
	
	
		}
