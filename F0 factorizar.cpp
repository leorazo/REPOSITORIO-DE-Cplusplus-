//factorizaqr un numero dado
#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	
	int numero,i;
    cout <<"que numero quiere factorizar"<<endl;
    cin>>numero;
    
    cout <<"1"<<endl;
    
    for (i=2;i<=numero;i++)
    {
    	if((numero%i)==0)
    	{cout<<i<<endl;
		numero=numero/i;
		i--;}
    	
    	
    }
    
    getch();
    return 0;
    }
