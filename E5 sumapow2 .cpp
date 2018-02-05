//doble factorial


#include <iostream>  
#include <math.h>
#include <conio.h>


using namespace std;  

int main () {
	double numero, factorial=0,i;
	
	cout<<"cuantas veces quiere sumar las potencias de 2 ";
	cin>>numero;
	
	
	 for(i=1;i<=numero;i++)
	 {factorial+= ( pow (2,i) );
	
	 }
	 
	 
	 cout <<"la suma de las potencias es "<<factorial;
	 
	 getch();
    return 0;
    }
