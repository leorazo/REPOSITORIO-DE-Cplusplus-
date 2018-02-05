//pi

#include <iostream> 
#include <conio.h>   

using namespace std;  

int main () {
	
	long pi=2;
	
	for (long i=2;i<5;i=+2)
	{
		pi=pi*(i/(i-1));
		pi=pi*(i/(i+1));
	}
	
	
    cout <<pi<<endl;
    
    
    getch();
    return 0;
    }
