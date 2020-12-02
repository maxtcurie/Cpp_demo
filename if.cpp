#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;

//*************Comments*********************
//Example for compiling and running: icpc -o a.bin if.cpp && ./a.bin

int main() {

	int i=0;
	int j=0;
	cout<<"input i: "<<endl;
	cin>>i;
	if(i==20){
		cout<<"i="<<i<<endl;
	}
	else if(i==21 or i == 22){ // or use ||
		cout<<"i=21 or i = 22"<<endl;
	}
	else if(i==23 and j == 0){ // or use &&
		cout<<"i==23 and j == 0"<<endl;
	}
	else if(j!=0){
		cout<<"j not = 0"<<endl;
	}
	else{
		cout<<"Other cases"<<endl; 
	}

    return 0;  //return 0 indicates that everythin went well
} 
