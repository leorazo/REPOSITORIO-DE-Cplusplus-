//ordenamiento por seleccion

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int i,j, min,aux;
	int numeros []={3,2,5,4,1};
	
	for (i=0;i<5;i++){
		min=i;
		for (j=i+1;j<5;j++){
			if (numeros[j]<numeros[min])
			{min=j;}
			}
			
			aux=numeros[i];
			numeros[i]=numeros[min];
			numeros[min]=aux;
	}
	
	for (i=0;i<5;i++)
	{cout<<numeros[i]<<" ";}
	
	
	
	getch();
	return 0;
}

