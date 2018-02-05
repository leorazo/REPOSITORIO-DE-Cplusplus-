//ordenar arrglo con punteros
#include <iostream> 
#include <conio.h>   

using namespace std; 

void pedirdatos();
void ordenar (int *, int);
void mostrar (int *, int);

int numdatos,*punvec; //se declara el vector de puntero

int main () {
    
     pedirdatos();
	 ordenar (punvec, numdatos);
	 mostrar (punvec, numdatos);
	 
	 delete [] punvec;
    
    getch();
    return 0;
    }
    
    void pedirdatos (){
    	
    cout <<"el arreglo de que tamaño lo quiere"<<endl;
    cin>>numdatos;
    
    punvec = new int [numdatos]; //para crear arreglo dinamico
    
    for (int i=0;i<numdatos;i++)
    {cout <<"mete el dato "<<i+1<<" de "<<numdatos <<endl;
    cin>>*(punvec+i);  //aqui es desplazamiento lo hace  anivel de bits
    }	
    	
    }
    
    void ordenar (int *punvec , int numdatos){
    	int aux=0;
    	
    	for (int a=0;a<numdatos;a++){
    		for (int j=0;j<numdatos;j++){
    			if (*(punvec+j)>*(punvec+j+1))
    			{aux=*(punvec+j);
				*(punvec+j)=*(punvec+j+1);
				*(punvec+j+1)=aux;}
    		
    		}	
    	}

    	
    }
    
     void mostrar (int *punvec , int numdatos){ //translado de los datos solicitados
    	
    	
    	cout<<"este es el arreglo ordenado "<<endl;
    	for (int c=1;c<numdatos+1;c++){
    		cout<<*(punvec+c)<<endl;		
    	}

    	
    }
    
    
