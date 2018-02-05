#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	
	int caso;
	float ingreso,saldo=1000,retiro;
	
	cout<< "bienvenido a su cajero \n";
    cout<< "1- ingresar dinero a su cuenta\n";
	cout<< "2- retirar dinero se su cuenta\n"; 
	cout<< "3- salir\n "; 
	cout<< "opcion: "; cin>> caso;
					
						
	switch (caso){
		case 1: cout <<"digite la cantidad de dinero que quiere ingresar "; 
		cin>>ingreso;
		saldo=saldo+ingreso;
		cout <<"su dinero en cuenta es $"<<saldo; 
		break;
		
		case 2: cout <<"digite la cantidad de dinero que quiere retirar "; 
		cin>>retiro;
		if(saldo>retiro)
		{saldo=saldo-retiro;
		cout <<"uds retiro $"<<retiro; 
		cout <<"su dinero en cuenta es $"<<saldo; 
		}
		else{cout <<"no tiene suficiente saldo"; }
		
		
		break;
		
		
		case 3: cout <<""; break;
		
		default:cout <<"caso no valido"; break;
		
	} 


return 0;	

}
