//metodo burbuja

#include <iostream>
#include<conio.h>


using namespace std ;

int main (){
	
	int arre [5]={4,2,3,5,1};
	
	int x,i,aux=0;
	
	
	for (x=0;x<5;x++){
		for (i=0;i<5;i++){
			
			if (arre[i]>arre[i+1]){aux=arre[i+1] ;  arre[i+1]=arre[i]; arre[i]=aux;}
			
			
		}	
			
		}
		
			for (x=0;x<5;x++){
			cout<<arre[x]<<" ";
			
		}

	
	getch();
	return 0;
	
	
	
}
