//File name: HW2.cpp
//Calculate the y=m*x+b 
//Created by Max Curie on 09/10/2020
#include <iostream> 
#include <math.h>

using std:: cin ;
using std:: cout ;
using std:: endl ;
//*************Comments*********************
//Example for compiling: icpc -o test.bin test.cpp
//Example for running: icpc -o a.bin struct.cpp && ./a.bin

struct coord{
	float x;
	float y;	
};

struct line{
	coord dot1;
	coord dot2;	
};

float length_calc(line line0);

int main() {
	line line0;

	line0.dot1.x=1;
	line0.dot1.y=2;
	line0.dot2.x=1;
	line0.dot2.y=3;

	float length=length_calc(line0);

    cout<<"length: "<<length<<endl;

	return 0;
} 

float length_calc(line line0){
	return sqrt( pow(line0.dot1.x-line0.dot2.x,2) 
		       + pow(line0.dot1.y-line0.dot2.y,2) );
}
 