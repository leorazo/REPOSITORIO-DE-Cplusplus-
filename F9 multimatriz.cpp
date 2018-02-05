//multiplicar matrices 3 x 3

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int primera [3][3]={{2,0,1},{3,0,0},{5,1,1}};
	int segunda [3][3]={{1,0,1},{1,2,1},{1,1,0}};
	int tercera [3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int y,x,t;

	for (y=0;y<3;y++)
		{for (x=0;x<3;x++)
			{for (t=0;t<3;t++)
			  {tercera [y][x]+= (primera [y][t]*segunda [t][x]);}
			}
		}
		
		
			for (y=0;y<3;y++)
		{for (x=0;x<3;x++)
			
			  {cout <<tercera [y][x] <<" ";}
			cout <<"\n";
		}	
		
		
	
	getch();
	return 0;
}
