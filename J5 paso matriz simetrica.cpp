#include<iostream>
#include<conio.h>

using namespace std;

int matriz [100][100],numfilas,numcolumnas;
void pedir ();
void simetria(int matriz [100][100], int , int);

int main (){
	
	pedir();
	simetria(matriz,numfilas,numcolumnas);
		
	
	return 0;
	getch();
}


void pedir ()
{
	cout<<"digite el numero de filas"<<endl;
	cin>>numfilas;
	cout<<"digite el numero de columnas"<<endl;
	cin>>numcolumnas;
	
	for(int y=0;y<numfilas;y++)
		{for(int x=0;x<numcolumnas;x++)
			{cout<<"introduce el elemento "<<y<<" "<<x<<endl;
			cin>>matriz[y][x];
			}
		}
	
	
}


void simetria (int matriz [100][100], int numfilas, int numcolumnas){
	int prueba=0;
	
	if(numfilas==numcolumnas)
	{	for(int y=0;y<numfilas;y++)
		{for(int x=0;x<numcolumnas;x++)
			{
				if (matriz[y][x]==matriz[x][y])
				{prueba++;}
			}
		}
		
		if (prueba==(numfilas*numcolumnas))
		{cout<<"la matriz es simetrica";}
		else {cout<<"la matriz no es simetrica";}
	}
	
	else {cout<<"la matriz no es simetrica";}
	
	

		
		
	
	
}
