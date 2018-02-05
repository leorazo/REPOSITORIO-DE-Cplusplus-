//contar vocales con punteros
#include <iostream> 
#include <conio.h>  
#include <string.h>  

using namespace std;  

void pedirnombre();
int contar(char *);

char nombre [30];

int main () {
   
   pedirnombre();
   cout<<"la cantidad de vocales es "<< contar (nombre)<<endl;
    
    getch();
    return 0;
    }
    
    void pedirnombre(){
    
    cout<<"digite su nombre "<<endl;
    cin.getline(nombre,30,'\n');
    strupr(nombre);
    
    }
    
    int contar(char *nombrest){  //cambio de nombre para uso interno
    	int contador=0;
    	 
    	 while (*nombrest)  //hasta que no se genere desbordamiento de acaba 
    	 {
    	 	switch (*nombrest){
    	 		case'A':
    	 		case'E':
				 case'I':
				 case'O':
				 case'U':contador++;		
    	 	}
    	 	 
    	 	nombrest++;
    	 }
    	
    	return contador;
    	
    }
