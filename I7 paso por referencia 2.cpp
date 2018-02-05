//paso de valor por refencia

#include <iostream> 
#include <conio.h>   

using namespace std;  					//no hace falta declarar el nombre de l avariable

void calcular (int,int,int&,int&);   //cuando se hace asi el paso de valores se 
										//pasa el espacio en memoria es lugar de solo el valor
int main () {
	int num1,num2, suma=0 , producto=0;     //te prmite regresar valores  a la funcion main
    cout <<"digite 2 numeros "<<endl;
    cin>>num1>>num2;
    
    cout <<"el num1 es "<<num1<<endl;
    cout <<"el producto es "<<producto<<endl;
    
    calcular (num1,num2,suma,producto);
    
    cout <<"la suma es "<<suma<<endl;
    cout <<"el producto es "<<producto<<endl;
    
    
    
    getch();
    return 0;
    }
    
    void calcular (int num1,int num2,int& suma,int& producto){
    	
    	suma=num1+num2;
    	producto=num1*num2;
    	
    	
    }
