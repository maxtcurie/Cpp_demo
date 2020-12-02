
#include <iostream> 

//#include <string> //header, 
using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for compiling: icpc -o array_bomb.bin array_bomb.cpp
//Example for running: ./array_bomb.bin


int main() {
	long long int n=0;
	int x[5]={0,1111,2222,3333};
    
    while(1){
    	n=n-1;
    	cout<<"*************************"<<endl;
    	cout<<"*(x+n) original:"<<*(x+n)<<endl;
		*(x+n)=0;
		cout<<"n="<<n<<endl;
		cout<<"x+n="<<x+n<<endl;
		cout<<"*(x+n) now:"<<*(x+n)<<endl;
		cout<<"*************************"<<endl;
	}
    return 0;  //return 0 indicates that everythin went well
} 
