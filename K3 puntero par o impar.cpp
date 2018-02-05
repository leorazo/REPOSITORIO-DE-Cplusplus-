//puntero par o impara
#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	
	int num , *dir_num;
	
    cout <<"mete un numero "<<endl;
    cin>>num;
    
    dir_num=&num; //guardando puntero , "asignacion 2 de puntero y de valor"
    
    if (*dir_num%2==0)  //cuando se pone * se usa el valor
    {cout <<"el numero "<<*dir_num<<" es para "<<endl;
	cout <<"la posicion de memoria es "<<dir_num<<endl;
	}
	
	else {cout <<"el numero "<<*dir_num<<" es impara "<<endl;
	cout <<"la posicion de memoria es "<<dir_num<<endl;
	}
    
    getch();
    return 0;
    }
