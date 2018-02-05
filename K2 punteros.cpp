///punteros

#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
								//debe de ser del mismo tipo
	int num =20, *dir_num;  //asi se crea una variable para almacenar un puntero
	dir_num=&num;  //para asignacion de tipo puntero no ocupa *
	
    cout <<"numero "<< num<<endl;
    cout <<"direccion de memoria "<< &num<<endl;  //asi es como se pone la direccion de memoria
    
    cout <<"numero "<< *dir_num<<endl;   //impresion del valor
    cout <<"direccion de memoria "<< dir_num <<endl;    //impresion de posicion puntero
    
    getch();
    return 0;
    }
