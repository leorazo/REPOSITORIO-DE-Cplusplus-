#include<iostream>

using namespace std;

int main (){
	
	float calificacion , practica , teoria , participacion, contador=0;
	
	cout<< "\n calificacion de practica "; cin>> practica;
	cout<< "\n calificacion de teoria "; cin>> teoria;
	cout<< "\n calificacion de participacion "; cin>> participacion;
	
	practica *= 0.3;
	teoria *=0.6;
	participacion*= 0.1;
	
	contador++;
	
	calificacion= practica +teoria + participacion;
   	 

	
	cout.precision(4);
	
	cout<< "\n la calificacion final es: "<<calificacion;
    cout<< "\n contador es: "<<contador;	
	
}
