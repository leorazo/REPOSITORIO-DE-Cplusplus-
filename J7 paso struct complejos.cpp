#include<iostream>
#include<conio.h>

using namespace std;

struct complejos {
	int real;
	 int ima;
	
}z1,z2;

void pedir();   //sin parametros
complejos calcular(complejos,complejos);   //cuantos objetod de la struct vas a mandar y  que tipo de retorno
void muestra(complejos);



int main (){
	
	pedir();
	
	complejos x =calcular(z1,z2);  //x es una variable de tipo "complejo" a la cual se invoco
									//le metodo calcular para asi asignar valor re retorno "z1" que es struct
	muestra(x);//parametro  a usar
	 
		
	
	return 0;
	getch();
}

void pedir (){
	cout<<"parte real del primer numero"<<endl;
	cin>>z1.real;
	cout<<"parte imaginaria del primer numero"<<endl;
	cin>>z1.ima;
	
	cout<<"parte real del segundo numero"<<endl;
	cin>>z2.real;
	cout<<"parte imaginaria del segundo numero"<<endl;
	cin>>z2.ima;	
	
}

complejos calcular(complejos z1, complejos z2){
	
	
	z1.real+=z2.real;
	z1.ima+=z2.ima;
	
	return z1;  //que valor se va retornar para ser usado por el siguiete metodo invocado
	
	
}

void muestra (complejos x){ //variable para hacer udo del struct de retorno el el metodo anterior
	
		cout<<x.real<<"+"<<x.ima<<"i"<<endl;
}





