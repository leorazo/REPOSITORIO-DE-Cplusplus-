#include<iostream>

using namespace std;

int main (){
	
	
	char letra;
	
	cout<< "\n este programa te dira si es una vocal mayuscula o minuscula";
	cout<< "\n inserte una letra "; cin>> letra;

    switch (letra){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': cout <<"la letra es una vocal minuscula"; break;
		case 'A': 
		case 'E': 
		case 'I': 
		case 'O': 
		case 'U': cout <<"la letra es una vocal MAYUSCULA"; break;
		default:cout <<"caso no valido"; break;
	
	} 
    
	
	
	return 0;
	

}
