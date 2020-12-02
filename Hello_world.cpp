#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;
using std:: string ;

//Comments
/*
  Comment block
*/
//Example for running: icpc -o a.bin Hello_world.cpp && ./a.bin

int main() {
  	string name;
  	cout<<"Hello_world, what is your name? "<<endl;
  	cin>>name;
  	cout<<"Hello, "<<name<<"!"<<endl;
	int problem_1;
	problem_1=2.+2.;
	int problem_2;
	problem_2=problem_1-1;
	cout<<"2+2 is "<<problem_1<<", -1 is "<<problem_2<<endl;
  	cout<<-6%7;
} 