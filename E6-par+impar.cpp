//-par +impar


#include <iostream>  
#include <math.h>
#include <conio.h>


using namespace std;  

int main () {
	int par=0,numero,impar=0,i;
	
	cout<<"hasta que numero deseas hacer -par +impar  ";
	cin>>numero;
	
	
	 for(i=1;i<=numero;i++)
	 {
	 	if ((i/2)==0)
		 {par+=i;}
		 else {impar+=i;}
	
	 }
	 
	 
	 cout <<"el resulatdo de la operacion es "<<-impar+par;
	 
	 getch();
    return 0;
    }
