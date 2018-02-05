//expo sin pow

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int pow=1,i,base,potencia;
	
	cout<<"mete el numero base ";
	cin>>base;
	cout<<"mete el numero potencia ";
	cin>>potencia;
	
	if (0<base && 0<potencia)
	{for(i=1;i<=potencia;i++)
	{pow*=base;}
	
		cout<<base <<" elevado a  "<<potencia <<" es "<<pow <<endl;
		
		else {cout<<"numeros no validos";
		}		
	}

	
	getch();
	return 0;
}
