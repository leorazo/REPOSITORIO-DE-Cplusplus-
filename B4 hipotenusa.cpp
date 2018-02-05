#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	float catetoa,catetob, aux;
	double hipotenusa;
		
	cout<< "\n mete cateto a "; cin>> catetoa;
	cout<< "\n mete cateto b "; cin>> catetob;
	
	hipotenusa=sqrt(catetoa*catetoa+catetob*catetob);

	
	cout<< "\n la hipotenusa es: " << hipotenusa;
	
	
    	
	
}
