//recorrer arreglo

#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std ;

int main (){
	
	char frase [30];
	
	int a=0, e=0, i=0, o=0, u=0, x=0;
	
	cout<<"mete una frase"<<endl;
	cin.getline (frase,30,'\n' );  //meter arreglo (arreglo , tamaño , finalizar)
	
	for (x=0;x<30;x++){
		
		switch (frase[x])
		{case 'a' :a++; break;
		 case 'e' :e++; break;
		 case 'i' :i++; break;
		 case 'o' :o++; break;
		 case 'u' :u++; break;	
			
			
		}
		
		
	}
	
		cout <<"hay " <<a << " a" <<endl;
		cout <<"hay " <<e << " e" <<endl;
		cout <<"hay " <<i << " i" <<endl;
		cout <<"hay " <<o << " o" <<endl;
		cout <<"hay " <<u << " u" <<endl;
	
	getch();
	return 0;
	
	
	
}
