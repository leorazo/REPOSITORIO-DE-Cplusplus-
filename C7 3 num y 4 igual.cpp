#include<iostream>

using namespace std;

int main (){
	
	
	int num1,num2,num3,num4;
	
	cout<< "\n mete 3 numeros y te dira si el cuarto es = alguno de los anteriores";
	cout<< "\n inserte el 1 numero "; cin>> num1;
    cout<< "\n inserte el 2 numero "; cin>> num2;
    cout<< "\n inserte el 3 numero "; cin>> num3;
    cout<< "\n inserte el 4 numero "; cin>> num4;
    
    
	if(num1==num4||num2==num4||num3 ==num4)
	{cout<< "\n el cuarto numero coincide con alguno de los anteriores ";}
	else {cout<< "el cuarto numero NO coincide con alguno de los anteriores " ;}
	
return 0;
}
