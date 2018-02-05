//funciones cuadrado

#include<iostream>
#include<conio.h>

using namespace std;


void cuadrado ();   //si tuviera variables locales el metodo se escribe   void pedirdados (int num1 , int num2);

float x,cua;


int main (){
	
	 cuadrado ();
	
	return 0 ;
	getch ();
}


void cuadrado (){
	cout<<"mete el numero que quieres elevar al cuadrado"<<endl;
	cin>>x;
	
	cua=x*x;
	
	cout<<"el cuadrado de numeros es " <<cua <<endl;
}



