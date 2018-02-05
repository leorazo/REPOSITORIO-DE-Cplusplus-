//colas
#include <iostream> 
#include <conio.h>   

using namespace std; 

struct nodo {
	int dato;
	nodo *siguiente;
} ;

void insertarcola(nodo *&, nodo *& , int);
bool colavacia (nodo *);
void suprimircola(nodo *&, nodo *&, int & );

int main () {
	
	nodo *frente=NULL;
	nodo *fin =NULL;
	
	int dato;
	cout <<"digite un dato"<<endl;
    cin>>dato;
    insertarcola(frente, fin ,dato);
    
    cout <<"digite un dato"<<endl;
    cin>>dato;
    insertarcola(frente, fin ,dato);
    
    cout <<"digite un dato"<<endl;
    cin>>dato;
    insertarcola(frente, fin ,dato);
    
    cout <<"digite un dato"<<endl;
    cin>>dato;
    insertarcola(frente, fin ,dato);
	
	cout <<"quitando elementos de la cola"<<endl;
	
	while (frente!=NULL)
	{suprimircola (frente , fin , dato);
	
		if (frente!=NULL)
		{cout <<dato<<",";}
	
		else {cout <<dato<<".";}
		
	}

    getch();
    return 0;
    }
    
    void insertarcola(nodo *&frente,nodo *&fin, int n)
    {
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
    
    void suprimircola (nodo *& frente , nodo *& fin , int & n )
    {
    	n=frente->dato;
    	nodo *aux =frente;
    	
    	if (frente ==fin)
    	{frente=NULL;
		fin=NULL;}
		
    	else{frente=frente->siguiente;}
    	
    	delete aux;
    	
    }
