//paso de valores por refencia intercambio de valores

#include<iostream>
#include<conio.h>

using namespace std;

void intercambio (int& , int&);

int main (){
	int x,y;
	
	cout<<"digite 2 valores"<<endl;
	cin>>x>>y;
	
	intercambio (x,y);
	
	
	
	return 0 ;
	getch ();
}

void intercambio (int& x, int& y){
	
	int aux;
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"los nuevos valores son "<<x<<endl;
	cout<<"los nuevos valores son "<<y<<endl;
	
	
}


