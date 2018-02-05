//doble factorial


#include <iostream>  
#include <conio.h>

using namespace std;  

int main () {
	int numero, factorial=1,i,sumafactorial=0;
	
	cout<<"mete un numero que quieras sumar sus factoriales ";
	cin>>numero;
	
	
	 for(i=1;i<=numero;i++)
	 {factorial*=i;
	 sumafactorial+=factorial;
	 }
	 
	 
	 cout <<"la suma de factoriales del numero es "<<sumafactorial;
	 
	 getch();
    return 0;
    }
