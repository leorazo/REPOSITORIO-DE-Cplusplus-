//struct con punteros
#include <iostream> 
#include <conio.h>   

using namespace std;  

struct structpersona{
	char nombre [30];
	int edad;
	
}persona , *punteropersona=&persona;  //asignacion del puntero de tipo struct

void pedir ();
void mostrar (structpersona *);   //el dato que se pasa es el nombre de la esctructura

int main () {
    
    pedir();
    mostrar (punteropersona); //aqui es el nombre del puntero
    
    getch();
    return 0;
    }
    
    void pedir (){
    	
    	cout<<"escriba el nombre de la persona "<<endl;
    	cin.getline(punteropersona->nombre ,30,'\n');  //asi es com se accede a los espacios del es
    	cout<<"escriba la edad de la persona "<<endl;
    	cin>>punteropersona->edad;
}

 void mostrar (structpersona *punteropersona){  // nombredeestructura  nombredelpuntero    aqui se podria hacer cambio de nombre en las variables
    	
    	cout<<"el nombre de la persona es "<<punteropersona->nombre<<endl;
    	cout<<"escriba la edad de la persona "<<punteropersona->edad<<endl;
    
}

