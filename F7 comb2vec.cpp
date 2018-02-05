//crear 2 vectores y mostrar un 3 que sea la combinacion de los 2 anteriores
#include <iostream>  
#include <conio.h>

using namespace std;  

int main () {
	
	int i,ii,a;
	 
	cout <<"combinacion de 2 vectores "<<endl;
	
	 int primero[3],segundo[3],tercero[6];;
	

	 for(int i=0;i<3;i++)
	 {
	 	cout << "dijite la posicion  " <<i << " del vector primero" <<endl;
		 cin>>primero[i];	
		 
		 cout << "dijite la posicion  " <<i << " del vector segundo" <<endl;
		 cin>>segundo[i];	 
		 
		 tercero [i]=primero[i];
		 tercero [i+3]=segundo[i];	
	 }
	  
		 for(int i=0;i<6;i++)
	 {
	 	cout << "el vector resultante es  " <<tercero[i]<<endl;	 	
	 }
	
	 
	 getch();
    return 0;
    }
