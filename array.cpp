#include <iostream> 

//#include <string> //header, 
using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for compiling and running: icpc -o a.bin array.cpp && ./a.bin

//https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/
int main() {
	int x[5]={0,1111,2222,3333,4444};
    cout<<"x[5]={0,1111,2222,3333}"<<endl;
    cout<<"x[0]:"<<x[0]<<endl;	//array start with 1
    cout<<"x:"<<x<<endl;
    cout<<"*x:"<<*x<<endl; 
    cout<<"*(x+1):"<<*(x+1)<<endl; 
    cout<<"*(x+10):"<<*(x+10)<<endl; 

    int y[5][2]={	{11,12},
    				{21,22},
    				{31,32},
    				{41,42},
    				{51,52} 	} ;	//5 by 2 array
    cout<<"y[4][1]"<<y[4][1]<<endl;
    return 0;  //return 0 indicates that everythin went well
} 
