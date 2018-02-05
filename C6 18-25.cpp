#include<iostream>

using namespace std;

int main (){
	
	
	int edad;
	
	cout<< "\n este programa te dira si la edad esta entre 18 y 25";
	cout<< "\n inserte la edad "; cin>> edad;

    
    
	if(edad>=18&&edad<=25){cout<< "\n la edad" <<edad << " si esta dentro de rango" ;}
	else {cout<< "\n la edad" <<edad << " si esta fuera de rango" ;}
	
return 0;
}
