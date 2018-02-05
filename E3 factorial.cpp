//factorial

#include <iostream>  
#include <conio.h>

using namespace std;  

int main () {
	int numero, factorial=1,i;
	
	cout<<"mete un numero que quieras factorial ";
	cin>>numero;
	
	for(i=1;i<=numero;i++)
	{factorial*=i;}

	
	 cout <<"el factorial del numero es "<<factorial;
	 
	 getch();
    return 0;
    }
