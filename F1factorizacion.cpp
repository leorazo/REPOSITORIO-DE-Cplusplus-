//descomposicion en numeros primos
#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	int i,numero, primo;
	
	cout<<"meta un numero y se descompondra el numero en numero primos " <<endl;
	cin>>numero;


	 for(i=1;i<=numero;i++)
	 {

		if (numero%i==0)
		{primo=(numero/i);
		cout<<primo <<endl;}
		
		else {continue;}
		
	 }
	 
	 
	 getch();
    return 0;
    }
