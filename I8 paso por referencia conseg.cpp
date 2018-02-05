//paso por refencia segundos

#include<iostream>
#include<conio.h>

using namespace std;

void conseg (int , int&,int&,int&);

int main (){
	
	int totalseg,horas,minutos,segundos;
	
	cout<<"intoduzca el total de segundos "<<endl;
	cin>>totalseg;
	
	conseg (totalseg,horas,minutos,segundos);
	
	cout<<"el total de horas es "<<horas<<endl;
	cout<<"el total de minutos es "<<minutos<<endl;
	cout<<"el total de segundos es "<<segundos<<endl;
	
	return 0;
	getch ();
	
}

void conseg (int totalseg, int& horas,int& minutos ,int& segundos){
	
	horas=totalseg/3600;
	totalseg%=3600;
	minutos=totalseg/60;
	totalseg%=60;
	segundos=totalseg;
	
	
}
