//Created by Max Curie on 09/24/2020
#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Both: icpc -o a.bin function.cpp && ./a.bin
void hello();  //Prototype
int add(int a, int b);

int main() {
	hello();
	cout<<"1+2="<<add(1,2)<<endl;
} 

void hello(){
	cout<<"Hello world"<<endl;
}

int add(int a, int b){
	return a+b;
}
