//plantillas de funciones

#include<iostream>
#include<conio.h>

using namespace std;

template <class CUALQUIERNUMERO >         // esta parte es opcional 
void absoluto (CUALQUIERNUMERO numero);    //puede servir sin ella

template <class CUALQUIERNUMERO >   //template <class creafamilia > 
void absoluto (CUALQUIERNUMERO numero){   //void nombredeplantilla (familia parametrogeneral)
	
	if (numero<0)					//solo se opera con los parametro dados anteriormente
	{numero = numero * (-1);}
	cout<<"el valor absoluto del numero es "<<numero<<endl ;
}

int main (){
	
	int num1=15;
	float num2= -23.15;
	double num3 = -45.8456;
	
	absoluto(num1);
	absoluto(num2);
	absoluto(num3);	
	
	return 0 ;
	getch ();
}



