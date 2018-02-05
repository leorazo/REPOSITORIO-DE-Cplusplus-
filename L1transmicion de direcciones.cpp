//transmicion de direcciones
#include <iostream> 
#include <conio.h>   

using namespace std;  

void intercambio(float *,float *); //va a recibir 2 valores de punteros     asi se pone * cuando no esta definido el nimbre
void mostrar (int num1,int num2);//va a recibir 2 int

int main () {
	
	float num1=25.5 ,num2=1.1;
	
	 cout <<"primer numero "<<num1<<endl;
    cout <<"segundo numero "<<num2<<endl;

	
	intercambio(&num1,&num2);  //asi se manda la informacion del puntero
	mostrar(num1,num2);  	//se mandara los valores de num1 num2 "sin usar el int"
	
   
    
    getch();
    return 0;
    }
    
    void intercambio(float *dirnum1,float *dirnum2)  //cambiode nombre de las variables de tipo puntero que se va usar
    {
    	float aux;
    	
    	aux=*dirnum1;
    	*dirnum1=*dirnum2;
    	*dirnum2=aux;
    	
    }
    
    void mostrar(int num1,int num2)  //valores que recibe
    {
    	cout<<"despues del intercambio"<<endl;
    	
    	cout <<"primer numero "<<num1<<endl;
    	cout <<"segundo numero "<<num2<<endl;
    	
    }
    
