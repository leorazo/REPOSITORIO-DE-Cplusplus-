//funciones potencia

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;


void POTENCIA ();   //si tuviera variables locales el metodo se escribe   void pedirdados (int num1 , int num2);

double base, exponente,potencia;


int main (){
	
	 POTENCIA ();
	
	return 0 ;
	getch ();
}


void POTENCIA (){
	cout<<"mete el numero que quieres que sea la base"<<endl;
	cin>>base;
	
	cout<<"mete el numero que quieres que sea el exponente"<<endl;
	cin>>exponente;
	
	potencia=pow(base,exponente);
	
	cout<<"la potencia es  " <<potencia <<endl;
}
