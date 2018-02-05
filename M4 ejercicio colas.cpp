//ejercicio de colas
#include <iostream> 
#include <conio.h>   
#include <stdlib.h> 

using namespace std; 

struct nodo {
	char dato;
	nodo *siguiente;
} ;

void menu ();
void insertarcola(nodo *&, nodo *& , char);
bool colavacia (nodo *);
void suprimircola(nodo *&, nodo *&, char & );

int main () {
	
	menu();
	
	getch();
	return 0;
	
}

void menu (){
	nodo *frente=NULL;
	nodo *fin=NULL;
	int opc;
	char dato;
	
	do {
		cout<<"\t menu: "<<endl;
		cout<<"1 insertar un elemento en la cola "<<endl;
		cout<<"2 mostrar todos los elementos de la cola"<<endl;
		cout<<"3 salir"<<endl;
		cout<<"opcion: "<<endl;
		cin>>opc;
		
		switch (opc)
		{
			case 1:cout<<"ingrese caracter para agregar a la cola"<<endl;
			cin>>dato;
			insertarcola(frente, fin,dato);
			break;
			case 2:cout<<"mostrando los elementos de la cola"<<endl;
			while (frente!=NULL)
			{suprimircola (frente , fin , dato);
	
				if (frente!=NULL)
					{cout <<dato<<",";}
	
				else {cout <<dato<<".";}
		
			}
			system ("pause");
			break;
			
			
			case 3: 
			break;
			
		}
		system ("cls");
	}
	
	while (opc!=3);
	
	
		}
		
		
void insertarcola (nodo *&frente ,nodo *&fin,char n){
	
	nodo *nuevonodo=new nodo();
    	 nuevonodo->dato=n;
    	 nuevonodo->siguiente=NULL;
    	 
    	 if (colavacia(frente))
    	 {frente =nuevonodo;}
    	 else {fin->siguiente=nuevonodo;}
    	 
    	 fin =nuevonodo;
    	 
    	 cout <<"el elemento " <<n<<" se inserto"<<endl;
	
}	

 bool colavacia(nodo *frente){
    	
    return (frente==NULL)?true :false;
    	
    }	
    
    
    void suprimircola (nodo *& frente , nodo *& fin , char & n )
    {
    	n=frente->dato;
    	nodo *aux =frente;
    	
    	if (frente ==fin)
    	{frente=NULL;
		fin=NULL;}
		
    	else{frente=frente->siguiente;}
    	
    	delete aux;
    	
    }
