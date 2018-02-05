#include<iostream>

using namespace std;

int main (){
	
	int precio;
	float iva=0;
	
	cout<< "\n digite el precio del producto "; cin>> precio;
	
	 
	iva=precio* 1.16;
	
	cout<< "\n el precio del producto es: "<<precio;
	cout<< "\n el preicio del producto con iva es: "<<iva;
}
