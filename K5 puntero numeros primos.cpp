#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	int num ,x,numentrada ,prueba=0;
	
	 cout <<"hasta que nunero quieres saber los numeros primos "<<endl;
    cin>>numentrada;
	
	for (int x=1;x<=numentrada;x++)
	{num=x;
	
	for (int i=1;i<=num;i++)
    {if (num%i==0)
		{prueba++;}	
		
		
	}
	if (prueba==2)
		{cout <<"numero es primo"<<num<<endl;}
	prueba=0;	
	
	}
	
    
    
    
    
    getch();
    return 0;
    }
