#include<iostream>

using namespace std;

int main (){
	
	float a,b,c;
	
	cout<< "\n este programa intercambiara los valores metidos";
	cout<< "\n digite el primer numero "; cin>> a;
	cout<< "\n digite el segundo numero "; cin>> b;
   
    c=a;
	a=b;
	b=c;	 

	
	cout.precision(4);
	
	cout<< "\n el primer valor es: "<<a;
    cout<< "\n el primer valor es: "<<b;	
	
}
