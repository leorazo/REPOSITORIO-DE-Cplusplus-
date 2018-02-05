//structuras anidadas mejor alumno
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct notas {
float nota1 , nota2,nota3;	
};

struct alumno {
	char nombre [20];
	char sexo [20]; 
	int edad;
	struct notas objnotas;
	float promedio;
} arralumnos [2];


int main (){
	
	cout<<"mete los datos de los alumnos";
	
	float mejorpromedio=0;
	int posmejor;
	
	for (int i=0;i<2;i++)
	{
	
	cout<<"nombre "<<endl;
	cin.getline(arralumnos[i].nombre,20,'\n'); 
	cout<<"sexo "<<endl;
	cin.getline(arralumnos[i].sexo,20,'\n'); 
	cout<<"edad"<<endl;
	cin>>arralumnos[i].edad; 
	cout<<"nota1 "<<endl;
	cin>>arralumnos[i].objnotas.nota1; 
	cout<<"nota2"<<endl;
	cin>>arralumnos[i].objnotas.nota2; 
	cout<<"nota3"<<endl;
	cin>>arralumnos[i].objnotas.nota3; 
	
	arralumnos[i].promedio= (arralumnos[i].objnotas.nota1+arralumnos[i].objnotas.nota2+arralumnos[i].objnotas.nota3)/3;
	
	
	if (mejorpromedio<arralumnos[i].promedio)
	{posmejor=i;}
	}
	
	cout<<"el mejor alumno fue "<<endl;
	
	cout<<"nombre "<<arralumnos[posmejor].nombre<<endl;
	cout<<"sexo "<<arralumnos[posmejor].sexo<<endl;
	cout<<"edad"<<arralumnos[posmejor].edad<<endl;
	cout<<"nota1 "<<arralumnos[posmejor].objnotas.nota1<<endl;
	cout<<"nota2 "<<arralumnos[posmejor].objnotas.nota2<<endl;
	cout<<"nota3 "<<arralumnos[posmejor].objnotas.nota3<<endl;
	
	
	
	return 0;
	getch ();
	
	
}
