//This program do trig quick math
//Created by Max Curie on 09/24/2020
#include <iostream> 
#include <math.h>

using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Both: icpc -o HW3.bin HW3.cpp && ./HW3.bin
float Hypotenuse_calc(float side_a,float side_b);  //Prototype
float Angle_1_calc(float side_a,float side_b);
float Angle_2_calc(float side_a,float side_b);

int main() {
	float side_a=3;
	float side_b=7;
    
    float Hypotenuse,Angle_1,Angle_2;
	Hypotenuse=Hypotenuse_calc(side_a,side_b);
	Angle_1=Angle_1_calc(side_a,side_b);
	Angle_2=Angle_2_calc(side_a,side_b);

	cout<<"Hypotenuse is "<<Hypotenuse<<endl;
	cout<<"Angle_1 is "<<Angle_1<<"degree"<<endl;
	cout<<"Angle_2 is "<<Angle_2<<"degree"<<endl;

	return 404;//I know it should be return 0
} 


float Hypotenuse_calc(float side_a,float side_b){
	float Hypotenuse=sqrt(pow(side_a,2.)+pow(side_b,2.));
	return Hypotenuse;
}

float Angle_1_calc(float side_a,float side_b){
	float Angle_1=atan(side_a/side_b)*180./3.14159265359;
	return Angle_1;
}

float Angle_2_calc(float side_a,float side_b){
	float Angle_2=atan(side_b/side_a)*180./3.14159265359;
	return Angle_2;
}