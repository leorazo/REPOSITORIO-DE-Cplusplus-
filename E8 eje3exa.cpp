//3 examenes 5 alumnos , pasar todo , al menos 1 , solo el final

#include <iostream>  
#include <conio.h>


using namespace std;  

int main () {
	int i,exa1,exa2,exa3, todos=0, uno=0,final=0;
	
	cout<<"califique los 3 examenes de los 5 alumnos del 0-10 " <<endl;


	 for(i=1;i<=5;i++)
	 {
		
		cout<<"alumno "<<i <<" en el examen 1"<<endl;
		cin>>exa1;
		cout<<"alumno "<<i <<" en el examen 2"<<endl;
		cin>>exa2;
		cout<<"alumno "<<i <<" en el examen 3"<<endl;
		cin>>exa3;
		
		if ((exa1>5)&&(exa2>5)&&(exa3>5))
		{todos++;}
		
		if (exa1>5||exa2>5||exa3>5)
		{uno++;}
		
		if (exa3>5)
		{final++;}
	 	
	
	 }
	 
	 	cout<<"alumnos que pasaron todos los examenes " <<todos <<endl;
	 	cout<<"alumnos que pasaron al menos un examen " <<uno <<endl;
	 	cout<<"alumnos que pasaron el ultimo examen " <<final <<endl;
	 
	 
	 getch();
    return 0;
    }
