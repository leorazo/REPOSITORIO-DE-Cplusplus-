// categoria del corredor

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct competidor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
	char categoria[20];
} arrcomp[2];



int main (){
	
	
	cout<<"vamos a rellenar las esructuras dentro de un vector" <<endl;
	
	for (int i=0;i<2;i++){
		
	cout<<"nombre "<<endl;
	cin.getline(arrcomp[i].nombre,20,'\n');
	cout<<"edad "<<endl;
	cin>>arrcomp[i].edad;
	cout<<"sexo "<<endl;
	cin.getline(arrcomp[i].sexo,20,'\n');
	cout<<"club "<<endl;
	cin.getline(arrcomp[i].club,20,'\n');
	
	if (arrcomp[i].edad<=18)
	{strcpy (arrcomp[i].categoria,"juvenil");}
	if (19<=arrcomp[i].edad<=40)
	{strcpy (arrcomp[i].categoria,"senior");}
	if (41<arrcomp[i].edad)
	{strcpy (arrcomp[i].categoria,"veterano");}
	
	
	cout<<endl;	
	}
	
	
	for (int i=0;i<2;i++){
	  cout<<arrcomp[i].nombre<<endl;
	cout<<arrcomp[i].edad<<endl;
	cout<<arrcomp[i].sexo<<endl;
	cout<<arrcomp[i].club<<endl;
	cout<<arrcomp[i].categoria<<endl;
	
	cout<<endl;
	
	}
	
	
	getch();
	return 0;
	
	
}
