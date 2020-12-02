//created by Max Curie 09/29/2020
//Get line using reference

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//icpc -o reference.bin reference.cpp && ./reference.bin

void f(float &y, float x, float m, float b);

int main () {
    float x=2;
    float m=0.3;
    float b=1;
    float y;
    f(y, x, m, b);

    cout<<"y="<<y<<endl;
    return 0;
}

void f(float &y, float x, float m, float b){
	y=m*x+b;
}