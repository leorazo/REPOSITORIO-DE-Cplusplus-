//fibonacci

#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	int x=0,y=1,z=1, numero,i;
	
	cout<<"hasta que numero de la serie de fibonacci deseas ver  ";
	cin>>numero;

	 for(i=1;i<=numero;i++)
	 {
	 z=x+y;
	 
	 cout<<z<<endl;
	 
	 x=y;
	 y=z;
	 	
	
	 }
	 
	 
	 getch();
    return 0;
    }
