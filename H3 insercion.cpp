//insercion

#include<iostream>
#include<conio.h>

using namespace std;
int main (){
	
	
	int arre [5]={4,2,3,1,5};
	int x, pos, aux;
	
	for (x=0;x<5;x++){
		pos=x;
		aux=arre[x];
		
		while ((pos>0)&& (arre[pos-1]>aux)){
			
			arre[pos]=arre[pos-1];
			pos--;		
		}
		arre[pos]=aux;	
		
	}
	
	for (x=0;x<5;x++){
	cout <<arre[x]<<" ";
	}
	
	
	
	
	getch ();
	return 0;
}
