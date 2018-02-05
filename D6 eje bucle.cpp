#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int i=0, numero;
	cout<<"este programa contara las veces que metas un numero diferente de 0 ,  hasta que metas un 0";
	
		while (numero!=0)
	{	
	cout<<"mete un numero entero" <<endl;
	cin>>numero;
	
	if (numero>0)
	{i++;	}
	else {break;}
	}
		
	cout<<"las cantidad de veces que metiste un numero mayor que 0 son " <<i;

	
getch();
return 0;	

}
