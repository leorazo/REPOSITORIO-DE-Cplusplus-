#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	//programa de las temperaturas 4hrs*6mds  prom max min
	double hora, tempdada, max=0, min=1000, auxprom=0,prom;
	
	for ( hora=4;hora<25;hora+=4)
	{cout<<"mete la temperatura de las"<< hora <<":00 horas ";
	cin>>tempdada;
	
	auxprom=auxprom+tempdada;
	prom=auxprom/6;
	
	if (min>tempdada)
	{min=tempdada;}
	
	if (max<tempdada)
	{max=tempdada;}
	
	
	}
	
	cout<<"la temperatura promedio es "<<prom <<endl;
	cout<<"la temperatura maxima es "<<max <<endl;
	cout<<"la temperatura minima es "<<min <<endl;

	
	getch();
	return 0;
	
	
}
