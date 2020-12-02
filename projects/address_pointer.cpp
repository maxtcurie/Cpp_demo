//created by Max Curie 09/29/2020
//Get line using reference

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//icpc -o address_pointer.bin address_pointer.cpp && ./address_pointer.bin

void f(float &y, float x, float m, float b);

int main () {
    
    float x0=2;
    float m=0.3;
    float b=1;
    float y=0;
    cout<<"&y: "<<&y<<endl; //it is a address
    //int &i is declare a reference varible 
    cout<<"y: "<<y<<endl;
    cout<<"*&y: "<<*&y<<endl;

    int x[5]={0,1111,2222,3333};
    cout<<"x[5]={0,1111,2222,3333}"<<endl;
    cout<<"x[0]:"<<x[0]<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"&x:"<<&x<<endl;
    cout<<"&*x:"<<&*x<<endl;
    cout<<"*&x:"<<&*x<<endl;
    cout<<"*x:"<<*x<<endl; 
    cout<<"**x:"<<**x<<endl; 
    cout<<"*(x+1):"<<*(x+1)<<endl; 
    cout<<"*(x+10):"<<*(x+10)<<endl; 
    cout<<"&*(x+1):"<<&*(x+1)<<endl; 
    cout<<"&*(x+10):"<<&*(x+10)<<endl;
    cout<<"(x+1):"<<&*(x+1)<<endl; 
    cout<<"(x+10):"<<&*(x+10)<<endl;

    
    
    f(y, x0, m, b);

    cout<<"y="<<y<<endl;
    return 0;
}

void f(float &y, float x, float m, float b){
	y=m*x+b;
}