//Created by Max Curie on 10/13/2020
#include <iostream> 
#include <time.h>
#include <vector>

using std:: vector ;
using std:: cout ;
using std:: endl ;
//using std:: srand ;


//*************Comments*********************
//Example for running: icpc -o a.bin vector_push_back.cpp && ./a.bin

int main() {
	int x=0;
	vector<int> a;
	srand((unsigned)time(0));//Seed to reset
	//cout<<a.back()<<endl;
	//int random_number0=rand()%3;
	//a.push_back(random_number0);

	while(x!=42){
		x = rand()%200+1;
		a.push_back(x);
	}
	cout<<"size of a: "<<a.size()<<endl;
	return 0;  //return 0 indicates that everythin went well
} 

