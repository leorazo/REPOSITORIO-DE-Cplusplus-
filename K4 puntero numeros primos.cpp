//punteros numeros primos

#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	int num , prueba=0,*dir_num;
	
    cout <<"mete un numero"<<endl;
    cin>>num;
    
    dir_num=&num;
    
    for (int i=1;i<=*dir_num;i++)
    {if (*dir_num%i==0)
		{prueba++;}	
	}
	
	if (prueba==2)
		{cout <<"el numero es primo"<<endl;}
		
		else {cout <<"el numero NO es primo"<<endl;}
    
    
    getch();
    return 0;
    }
