//paso por referencia

#include <iostream> 
#include <conio.h>   

using namespace std; 
 
 void valnuevo (int&, int&);    //paso por refencia no hace falta declarar el nombre de l avariable

int main () {
	
	int num1, num2;
	cout <<"digite 2 numeros "<<endl;
	cin>>num1>>num2;
	
	valnuevo(num1,num2);  //valores que se van a pasar
	
	cout <<"el nuevo valor del primer numero "<<num1 <<endl;
	cout <<"el nuevo valor del segundo numero "<<num2 <<endl;
	
    
    getch();
    return 0;
    }
    
    void valnuevo (int& xnum, int& ynum){  //a que variables locales se vca asignar el valor
    	
    cout <<"el  valor del primer numero "<<xnum<<endl;
	cout <<"el  valor del segundo numero "<<ynum<<endl;
    	
    	xnum=45;  //asignacion de nuevo valor
    	ynum=50;
	
    	
    }
