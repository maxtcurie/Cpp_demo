//Created by Max Curie on 09/22/2020
#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for compiling: icpc -o a.bin whiler.cpp
//Example for running: ./while.bin
//Both: icpc -o a.bin while.cpp && ./a.bin

int main() {
	int i=0;
    while(i<20){
        i++;
        if(i==9){
            continue;
        }
        else if (i==12){
            break;
        }
        cout<<"The index i = "<<i<<endl;
    }
    cout<<"Out of loop, the index i = "<<i<<endl;

    return 0;  //return 0 indicates that everythin went well
} 
