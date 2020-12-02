
#include <iostream> 

//#include <string> //header, 
using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for compiling: icpc -o array.bin array.cpp
//Example for running: ./array.bin


int main() {
	int x[5]={0,1111,2222,3333};
    cout<<"x[5]={0,1111,2222,3333}"<<endl;
    cout<<"x[0]:"<<x[0]<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"*x:"<<*x<<endl; 
    cout<<"*(x+1):"<<*(x+1)<<endl; 
    cout<<"*(x+10):"<<*(x+10)<<endl; 
    return 0;  //return 0 indicates that everythin went well
} 
