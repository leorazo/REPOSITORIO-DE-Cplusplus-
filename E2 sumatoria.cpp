//suma desde 1 hasta n

#include <iostream>  
#include <conio.h>

using namespace std;  

int main () {
	int numero, sumatoria=0,i;
	
	cout<<"mete un numero que quieras la sumatoria ";
	cin>>numero;
	
	for(i=1;i<=numero;i++)
	{sumatoria+=i;}

	
	 cout <<"la sumatoria del numero es "<<sumatoria;
	 
	 getch();
    return 0;
    }
