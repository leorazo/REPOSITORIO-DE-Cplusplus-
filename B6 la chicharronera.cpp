#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	
	double a,b,c,x,y;
		
	cout<< "\n mete el coeficiente de axx "; cin>> a;
	cout<< "\n mete el coeficiente de bx "; cin>> b;
	cout<< "\n mete el coeficiente de c "; cin>> c;
	
	x=(-b+sqrt((pow(b,2)-4*a*c)))/2*a;
    y=(-b-sqrt((pow(b,2)-4*a*c)))/2*a;
	
	cout<< "\n un resultado es: " << x;
	cout<< "\n un resultado es: " << y;
	
    	
	
}
