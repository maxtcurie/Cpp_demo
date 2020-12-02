//Created by Max Curie on 09/22/2020
#include <iostream> 
#include <time.h>
//#include <random>

using std:: cin ;
using std:: cout ;
using std:: endl ;
//using std:: srand ;


//*************Comments*********************
//Example for compiling: icpc -o coin_1M.bin coin_1M.cpp
//Example for running: icpc -o coin_1M.bin coin_1M.cpp && ./coin_1M.bin

int main() {
    int tot=1000000;
    int head=0;
    int tail=0;

    for(int i=0; i<tot;i++){
    	srand(time(NULL));//Seed to reset
		int rand();
		int random_number=rand();
		
		//cout<<"The random number is: "<< random_number <<endl;
		if (random_number%2==0){
			//cout<<"random_number is even"<<endl;
			//cout<<"It is head"<<endl;
			head++;
    
		}
		else if (random_number%2==1){
			//cout<<"random_number is odd"<<endl;
			//cout<<"It is tail"<<endl;
			tail++;
		}
    }
	
	cout<<"The total runs = "<<tot<<endl;
	cout<<"Tail = "<<tail<<endl;
	cout<<"Head = "<<head<<endl;
	cout<<"Tail+Head = "<<tail+head<<endl;

    return 0;  //return 0 indicates that everythin went well
} 
