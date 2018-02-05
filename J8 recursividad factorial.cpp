//recursividad factorial

#include <iostream> 
#include <conio.h>   

using namespace std;  

int factorial(int);  //prototipo de funcion qu ellevara algun int

int main () {
    cout <<factorial (3)<<endl;

    
    getch();
    return 0;
    }
    
    int factorial (int n){ //funcion concretada
    	
    	if (n==0)
    	{n=1;}  //este es el caso base , basicamente hasta el punto donde se concreta la funcion
    	
    	else{n=n*factorial(n-1);}   //aqui se esta llamando asi misma
    	
    	return n;
    }
