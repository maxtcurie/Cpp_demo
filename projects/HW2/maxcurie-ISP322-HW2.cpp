//File name: HW2.cpp
//Calculate the y=m*x+b 
//Created by Max Curie on 09/10/2020

//Structure of a program: http://www.cplusplus.com/doc/tutorial/program_structure/
#include <iostream> //header
#include <limits> //For the check the input

//In case Max is too lazy to add all the elements...
//using namespace std;

using std:: cin ; //add element cin
using std:: cout ;
using std:: endl ;
using std:: numeric_limits ;
using std:: streamsize ;

//*************Comments*********************
//Example for compiling: icpc -o HW2.bin HW2.cpp
//Example for running: ./HW2.bin
float input_float();

int main() {
    float m,x,b,y;
    cout << "Calculate y=m*x+b" ;
    cout <<endl<<"Please input the number: ";
    cout <<endl<< "Slope m = ";
    m=input_float();
    cout <<endl<< "Coordinate value x = ";
    x=input_float();
    cout <<endl<< "y-intercept b = ";
    b=input_float();
    y = m*x+b;
    cout <<endl<< "y = "<<y;
    cout<<", Quick Mafs ~Big Shaq"<<endl;
    return 0;  //return 0 indicates that everythin went well
} 


//From Validating user input in C++: https://www.hackerearth.com/practice/notes/validating-user-input-in-c/
float input_float(){
	float a;
	cin>>a;
	while(1){
		if(cin.fail()){
			cin.clear();
			//Explaination: https://stackoverflow.com/questions/25020129/cin-ignorenumeric-limitsstreamsizemax-n
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<endl<<"You have entered wrong input/previous input, type the input again:"<<endl;
			cin>>a;
		}

		else if(!cin.fail()){
			break;
	    }
	}
	return a;
}