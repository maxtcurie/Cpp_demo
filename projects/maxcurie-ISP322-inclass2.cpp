//Created by Max Curie on 09/17/2020
#include <iostream> 
#include <time.h>
//#include <random>

using std:: cin ;
using std:: cout ;
using std:: endl ;
//using std:: srand ;


//*************Comments*********************
//Example for compiling: icpc -o random.bin random.cpp
//Example for running: ./random.bin

int main() {

	srand(time(NULL));//Seed to reset
	int rand();
	int random_number=rand();
	cout<<"Coin toss: "<<endl;
	//cout<<"The random number is: "<< random_number <<endl;
	if (random_number%2==0){
		//cout<<"random_number is even"<<endl;
		cout<<"It is head"<<endl;
	}
	else if (random_number%2==1){
		//cout<<"random_number is odd"<<endl;
		cout<<"It is tail"<<endl;
	}

    return 0;  //return 0 indicates that everythin went well
} 
