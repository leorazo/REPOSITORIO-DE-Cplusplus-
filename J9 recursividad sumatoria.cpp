//recursividad sumatoria

#include <iostream> 
#include <conio.h>   

using namespace std;  

int sumatoria (int);  //prototipo de funcion qu ellevara algun int

int main () {
    cout <<sumatoria (4)<<endl;

    
    getch();
    return 0;
    }
    
    int sumatoria (int n){ //funcion concretada
    	int suma=0;
    	
    	if (n==1)
    	{suma=1;}  //este es el caso base , basicamente hasta el punto donde se concreta la funcion
    	
    	else{suma=n+sumatoria(n-1);}   //aqui se esta llamando asi misma
    	
    	return suma;
    }
