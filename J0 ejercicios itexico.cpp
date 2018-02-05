//ejercicios itexico

#include <iostream> 
#include <conio.h>   
#include<string.h>

using namespace std;  

void voltear();
void palim();
void mayor();
void inter();


int main () {
	
   voltear();
    palim();
    mayor();
    
    
    getch();
    return 0;
    }
    
    void voltear(){
    	
    char numero [20] ;
    cout <<"se pondra al reves el numero que escribas"<<endl;
    cout <<"intoduce un numero"<<endl;
    cin>>numero;
    strrev (numero);
    
    
    cout <<"el numero al reves es "<<numero<<endl;
    cout <<endl;
    	
    }
    
    void palim()
    {char numero [20] ;

    cout <<"te dire si tu numero es un palindromo"<<endl;
    cout <<"intoduce un numero"<<endl;
    cin>>numero;
    
	
	if (strlen(numero)==1)
	{cout <<"si es palindromo"<<endl;}
	
	
	int largoaux1=strlen(numero),prueba1=0;
	
	if (strlen(numero)%2==0)
	{for (int i=0;i<(strlen(numero)/2);i++)
		{if (numero[i]==numero[largoaux1-1])
			{prueba1++;
			largoaux1--;}
		}
		
		if (prueba1==strlen(numero)/2)
		{cout <<"si es palindromo"<<endl;}
		else {cout <<"no es palindromo"<<endl;}
		
		
	}
	
	int largoaux2=strlen(numero),prueba2=0;
	
	if (strlen(numero)%2==1)
	{for (int i=0;i<((strlen(numero)-1)/2);i++)
		{if (numero[i]==numero[largoaux2-1])
			{prueba2++;
			largoaux2--;}
		}
		
		if (prueba2==(strlen(numero)-1)/2)
		{cout <<"si es palindromo"<<endl;}
		else {cout <<"no es palindromo"<<endl;}

    	
    }
    
}


	void mayor (){
		
		int a,b,c;
		
		cout <<"introuce 3 numero y se ordenaran de menor a mayor"<<endl;
    
		cout <<"intoduce el 1 numero"<<endl;
    	cin>>a;
    	cout <<"intoduce el 2 numero"<<endl;
    	cin>>b;
    	cout <<"intoduce el 3 numero"<<endl;
    	cin>>c;
    	
    	if(a<=b<=c)
		{cout<<a<<b<<c<<endl;}
		
		if(a<=c<=b)
		{cout<<a<<c<<b<<endl;}
		
		if(b<=a<=c)
		{cout<<b<<a<<c<<endl;}
		
		if(b<=c<=a)
		{cout<<b<<c<<a<<endl;}
		
		if(c<=a<=b)
		{cout<<c<<b<<a<<endl;}
		
		if(c<=b<=a)
		{cout<<c<<b<<a<<endl;}
		
	}
	
	void inter (){
		
		int vec1 []= {1,3,4,5,1,2,9};
		int vec1 []= {8,2,1,3};
		int vec1 []= {2,5,7,2,1};
		
		
		
	}
