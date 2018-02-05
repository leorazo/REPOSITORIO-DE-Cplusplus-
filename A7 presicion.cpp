#include<iostream>

using namespace std;

int main (){
	
	float resultado=0, num1,num2;
	
	cout<< "\n digite el primer numero "; cin>> num1;
	cout<< "\n digite el segundo numero "; cin>> num2;
	 
	resultado=(num1/num2)+1;
	
	cout.precision(4);
	
	cout<< "\n el resultado es: "<<resultado;
	
}
	
