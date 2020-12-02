//Calculate the y=m*x+b 
//Created by Max Curie on 09/10/2020
#include <iostream> 
#include <string> //header, 
using std:: cin ;
using std:: cout ;
using std:: endl ;
using std:: string ; //functin

//YouTube: https://youtu.be/mFAaqmj399I

//*************Comments*********************
//Example for compiling: icpc -o HW2.bin HW2.cpp
//Example for running: ./HW2.bin

int main() {
    float m,x,b,y;
    cout << "Calculate y=m*x+b" ;
    cout <<endl<< "Slope m = ";
    cin >> m ;
    cout <<endl<< "Coordinate value x = ";
    cin >> x;
    cout <<endl<< "y-intercept b = ";
    cin >> b;
    
    try{
    	if (type(m)!=float){
    		throw 1;
    	}
    }

    y = m*x+b;
    cout <<endl<< "y = "<<y<<endl;
    return 0;  //return 0 indicates that everythin went well
} 

//Catch error YouTube: https://youtu.be/mFAaqmj399I
//Funcion YouTube: https://youtu.be/V9zuox47zr0