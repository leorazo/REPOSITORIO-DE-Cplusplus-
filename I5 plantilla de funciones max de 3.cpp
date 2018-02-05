//plantilla de funciones max de 3

#include <iostream> 
#include <conio.h>   

using namespace std;  

template <class familia > 
void superior (familia num1,familia num2,familia num3,familia max=0){
	
	max=num1;
	if(max<num2)
	{max=num2;}
	if(max<num3)
	{max=num3;}
	
	cout<<"el numero maximo es "<<max<<endl;	
	
}
int num1,num2,num3;

void meter (){
	cout<<"mete 3 numeros"<<endl;
	cin>>num1>>num2>>num3;
}
int main () {
	
    meter ();
    superior (num1,num2,num3);
    
    getch();
    return 0;
    }
