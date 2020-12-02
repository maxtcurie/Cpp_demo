//File name: HW2.cpp
//Calculate the y=m*x+b 
//Created by Max Curie on 09/10/2020
#include <iostream> 
#include <typeinfo>
#include <limits> //For the check the input
//#include <string> //header, 
using std:: cin ;
using std:: cout ;
using std:: endl ;
//using std:: string ; //functin
using std:: numeric_limits ;
using std:: streamsize ;

//*************Comments*********************
//Example for compiling: icpc -o test.bin test.cpp
//Example for running: ./test.bin
float input_float();

int main() {
	//string name;
	//name="12dfsd";
    //cout <<typeid(name).name() <<endl;
    float a,b;
    cout<<"Input a:";
    a=input_float();
    //cin>>a;
    cout<<endl<<"a="<<a<<endl;

    cout<<"Input b:";
    //cin>>b;
    b=input_float();
    cout<<endl<<"b="<<b<<endl;

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
			cout<<endl<<"You have entered wrong input, type the input again:"<<endl;
			cin>>a;
		}

		else if(!cin.fail()){
			break;
	    }
	}
	return a;
}
