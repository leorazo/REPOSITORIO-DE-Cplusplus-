//funciones

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos ();
void multiplicacion ();   //si tuviera variables locales el metodo se escribe   void pedirdados (int num1 , int num2);

float x, y,mult;


int main (){
	
	 pedirdatos ();
	 multiplicacion ();
	
	
	return 0 ;
	getch ();
}


void pedirdatos (){
	cout<<"mete 2 numeros a multiplicar"<<endl;
	cin>>x>>y;
}

void multiplicacion (){
	
	mult=x*y;
	
	cout<<"la multiplicacion de los 2 numeros es " <<mult <<endl;
}


/*

//funciones

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos ();
void multiplicacion (float x , float y);   

float num1 , num2;


int main (){
	
	 pedirdatos ();
	 multiplicacion (num1 , num2);
	
	
	return 0 ;
	getch ();
}


void pedirdatos (){
	cout<<"mete 2 numeros a multiplicar"<<endl;
	cin>>num1>>num2;
}

void multiplicacion (float x , float y){
	
	float mult=x*y;
	
	cout<<"la multiplicacion de los 2 numeros es " <<mult <<endl;
}
*/
