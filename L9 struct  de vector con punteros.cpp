//struct  de vector con punteros
#include <iostream> 
#include <conio.h>   

using namespace std;  

struct structalumno{
	char nombre [30];
	int edad;
	float promedio;
	
}alumno[3] , *punteroalumno=alumno;  //asignacion del puntero de tipo struct con vector
										//asigna la primer posicion

void pedir ();
int calcular (structalumno *);
void mostrar (structalumno * , int posicion);   //el dato que se pasa es el nombre de la esctructura

int main () {
    
    pedir();
   
    int posicion= calcular (punteroalumno );
    mostrar (punteroalumno , posicion); //aqui es el nombre del puntero
    
    getch();
    return 0;
    }
    
    void pedir (){
    	
    	for (int i=0;i<3;i++){
    	cout<<"escriba el nombre del alumno "<<i<<endl;
    	cin.getline((punteroalumno+i)->nombre ,30,'\n');  //asi es com se accede a los espacios del es
    	cout<<"escriba la edad del alumno "<<i<<endl;
    	cin>>(punteroalumno+i)->edad;
    	cout<<"escriba el promedio del alumno "<<i<<endl;
    	cin>>(punteroalumno+i)->promedio;
    	}
    	
    
}

 int calcular (structalumno *punteroalumno){  // nombredeestructura  nombredelpuntero    aqui se podria hacer cambio de nombre en las variables
    	float mayor=0;
    	int posicion=0;
    	
    	for (int i=0;i<3;i++)
    	{if ((punteroalumno+i)->promedio>mayor)
			{posicion=i;}
			}
    	 return posicion;
    
}

 void mostrar (structalumno *punteroalumno, int posicion){  // nombredeestructura  nombredelpuntero    aqui se podria hacer cambio de nombre en las variables
    	
    	cout<<endl;
    	cout<<"el mejor alumno es" <<endl;
    	
    	cout<<"el nombre del alumno "<<(punteroalumno+posicion)->nombre<<endl;
    	cout<<"la edad del alumno "<<(punteroalumno+posicion)->edad<<endl;
    	cout<<"el promedio del alumno "<<(punteroalumno+posicion)->promedio<<endl;
    
    
}

