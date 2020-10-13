#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	
	int caso, num;
	double numeroc,cubo;
	
		cout<< "seleccione que hacer \n"; 
	
		cout <<"1- numero par o impar \n"; 
		cout <<"2- cubo de un numero \n"; 
		cin>> caso;
	
	switch (caso){
		case 1: cout<< "\n este programa te dira si es par o impar";
				cout<< "\n inserte un numero "; cin>> num;
				if((num%2)==0 ){cout<< "\n el numero " <<num << " es par" ;}
				else {cout<< "\n el numero " <<num << " es impar" ;}
		break;
		
		
		case 2: cout<< "este programa te dara el cubo de un numero \n ";
				cout <<"introduce un numero \n "; 
				cin>> numeroc;
				cubo=pow(numeroc,3);
				cout <<"es cubo del numero es "<<cubo;
		break;
		
		default:cout <<"caso no valido"; break;
		
	} 


return 0;	

}
