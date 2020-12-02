//File name: HW2.cpp
//Calculate the y=m*x+b 
//Created by Max Curie on 09/10/2020
#include <iostream> 

//#include <string> //header, 
using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for compiling: icpc -o array.bin array.cpp
//Example for running: ./array.bin


int main() {
	char array_alpha[26]={
	    'A','B','C','D','E','F',	
		'G','H','I','J','K','L',
		'M','N','O','P','Q','R',	
		'S','T','U','V','W','X',	
		'Y','Z'
	};
	
	cout<<"Which alphabet do you want(start from 1): "<<endl;
    
    int a=0;
	cin>>a;
    
    if(a>26){
    	cout<<"a= "<< a << ", a has to be less than 27"<<endl;
    }
    else if (a<1){
    	cout<<"a= "<< a << ", a has to be greater than 0"<<endl;
    }
    else{
    	cout<<"Number "<< a << " Alphabet is "<< array_alpha[a-1] <<endl;
    }
    
    return 0;  //return 0 indicates that everythin went well
} 
