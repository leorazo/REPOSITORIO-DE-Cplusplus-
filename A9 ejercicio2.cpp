#include<iostream>

using namespace std;

int main (){
	
	float resultado=0, a,b,c,d,e,f;
	
	cout<< "\n digite el primer numero "; cin>> a;
	cout<< "\n digite el segundo numero "; cin>> b;
    cout<< "\n digite el tercer numero "; cin>> c;
	cout<< "\n digite el cuarto numero "; cin>> d;
	 cout<< "\n digite el tercer numero "; cin>> e;
	cout<< "\n digite el cuarto numero "; cin>> f;
	
		 
	resultado=((a+b)+c/(d+e)+f);
	
	cout.precision(4);
	
	cout<< "\n el resultado es: "<<resultado;
}
