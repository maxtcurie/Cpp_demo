//Created by Max Curie on 09/22/2020
#include <iostream> 


using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for compiling: icpc -o for.bin for.cpp
//Example for running: ./for.bin
//Both: icpc -o for.bin for.cpp && ./for.bin

int main() {
	int i;
    for(i=0;i<10;i+=2){
    	cout<<"The index i = "<<i<<endl;
    	i++;
    }
    cout<<"Out of loop, the index i = "<<i<<endl;

    int j=15;
    for(int j=0;j<10;j+=2){
    	cout<<"The index j = "<<j<<endl;
    	j++;
    }
    cout<<"Out of loop, the index j = "<<j<<endl;
    
    for(int j=0;j<10;j+=2){
    	cout<<"The index j = "<<j<<endl;
    	
    	for(int z=0;z<10;z++){
    		cout<<"j inside = "<<j<<endl;
    		cout<<"z = "<<z<<endl;
    	}

    }

    for(int j=0;j<10;j+=2){
    	cout<<"The index j = "<<j<<endl;
    	
    	for(int j=0;j<10;j++){
    		cout<<"j inside = "<<j<<endl;
    	}

    }



    return 0;  //return 0 indicates that everythin went well
} 
