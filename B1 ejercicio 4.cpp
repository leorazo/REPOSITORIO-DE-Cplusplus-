#include<iostream>

using namespace std;

int main (){
	
	float resultado=0, a,b,c,d;
	
	cout<< "\n digite el primer numero "; cin>> a;
	cout<< "\n digite el segundo numero "; cin>> b;
    cout<< "\n digite el tercer numero "; cin>> c;
	cout<< "\n digite el cuarto numero "; cin>> d;

	
		 
	resultado=a+(b/(c-d));
	
	cout.precision(4);
	
	cout<< "\n el resultado es: "<<resultado;
}
