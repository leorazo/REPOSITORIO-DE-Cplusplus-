//Sumar dentro de un rango 20-30


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int i=0,numero;
	bool sigue=true;
	
	while (sigue )
	{cout<<"mete un numero ";
	cin>>numero;
	
	if (numero<20 && 30>numero && numero!=0)
	{i++;}
	
	
	if (20<=numero && numero<=30)
	{sigue=false;}
	
	if (numero==0)
	{sigue=false;}
	
	
	}
	
	cout<<"los numeros dentro de rango son "<<i <<endl;


	
	getch();
	return 0;
}
