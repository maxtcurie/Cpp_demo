//File name: HW2.cpp
//Calculate the y=m*x+b 
//Created by Max Curie on 09/10/2020
#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;

//*************Comments*********************
//Example for compiling: icpc -o if.bin if.cpp
//Example for running: ./if.bin

int main() {

	if (true * false){
		cout<<"true * false = True"<<endl;
	}
	else{
		cout<<"true * false = False"<<endl;
	}

	if (true + false){
		cout<<"true + false = True"<<endl;
	}
	else{
		cout<<"true + false = False"<<endl;
	}

	if (true - false){
		cout<<"true - false = True"<<endl;
	}
	else{
		cout<<"true - false = False"<<endl;
	}

	if (true - true){
		cout<<"true - true = True"<<endl;
	}
	else{
		cout<<"true - true = False"<<endl;
	}

	



	int i=0;
	cout<<"input i: "<<endl;
	cin>>i;
	if(i==20){
		cout<<"i="<<i<<endl;
	}
	else if(i>20){
		cout<<"i>20"<<endl;
	}
	else{
		cout<<"i<20"<<endl; 
	}

    cout<<"input i again: "<<endl;
	cin>>i;
	if(i=0){
		cout<<"i = 0"<<endl;
	}
	else if(i=1){//Different compiler react differently 
		cout<<"i = 1"<<endl;
	}
	else if(i=3){
		cout<<"i = 3"<<endl;
	}
	else{
		cout<<"other condition"<<endl;
	}

    return 0;  //return 0 indicates that everythin went well
} 
