#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int i, entrada;
	
	cout<<"de que numero quiere la tabla de multiplicar";
	cin>>entrada;
	
	for (i=0;i<=10;i++)
	{
		cout<<entrada<<" x "<<i <<"="<<i*entrada<<endl;
	}
	
	getch();
	return 0;
}
