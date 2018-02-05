//funciones

#include<iostream>
#include<conio.h>

using namespace std;

int MAXIMO (int n , int m);

int MAXIMO (int n , int m)
{	int funmax;
	if(n<m)
	{funmax=m;}
	else {funmax=n;}
	
	return funmax;
}

int main(){
	
	int n,m,max;
	
	cout<<"mete 2 numeros"<<endl;
	cin>>n>>m;
	
	max=MAXIMO ( n ,m);
	
	cout<<"el mayor de los 2 numeros "<<max<<endl;
	
	
	return 0;
	getch();
}


