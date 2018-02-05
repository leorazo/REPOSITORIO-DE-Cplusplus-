//asignacion dinamica de arreglos
#include <iostream> 
#include <conio.h> 
#include <stdlib.h>   //para usar new y delete 

using namespace std;  

void pedirnotas();
void mostrarnotas();

int numcalificaciones,*punterocalificaciones;

int main () {
    
    pedirnotas();
    cout<<"\n";
	mostrarnotas();
	delete [] punterocalificaciones; //asi se liberan los espacio de memoria utulizados
	
	    
    getch();
    return 0;
    }
    
    void pedirnotas(){
    
    cout <<"digite el numero de calificaciones"<<endl;
    cin>>numcalificaciones;
    
    punterocalificaciones= new int [numcalificaciones]; //se crea el arreglo de puntero
    
    for (int i=0;i<numcalificaciones;i++)
    {cout <<"digite una calificacion"<<endl;
    cin>>punterocalificaciones[i];}					//y se podra tratar como un arreglo
    
	
	}
    
    void mostrarnotas(){
    
    for (int i=0;i<numcalificaciones;i++)
    {cout <<"mostrando calificaciones"<<punterocalificaciones[i]<<endl;
	}
    
	
	}
