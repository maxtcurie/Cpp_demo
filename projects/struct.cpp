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
//Example for running: icpc -o struct.bin struct.cpp && ./struct.bin

struct struct_sides{
	float a;
	float b;	
};

struct trig_info{
	float side_1;
	float side_2;
	float side_3;
	float angle_1;
	float angle_2;
	float angle_3;	
};

float Hypotenuse_calc(float side_a,float side_b);  //Prototype
float Angle_1_calc(float side_a,float side_b);
float Angle_2_calc(float side_a,float side_b);
trig_info Trig_calc(struct_sides sides0);

int main() {
	cout<<"In memory of an attractive math teacher Jamie once had. "<<endl;
	
	cout<<"For triangle 1"<<endl;
    struct_sides sides0;
    trig_info trig_info0;
	sides0.a=3;
	sides0.b=4;
    trig_info0=Trig_calc(sides0);
    cout<<"Side 1 is "<<trig_info0.side_1<<endl;
    cout<<"Side 2 is "<<trig_info0.side_2<<endl;
    cout<<"Hypotenuse is "<<trig_info0.side_3<<endl;
	cout<<"Angle_1 is "<<trig_info0.angle_1<<" degree"<<endl;
	cout<<"Angle_2 is "<<trig_info0.angle_2<<" degree"<<endl;

    cout<<"*****************"<<endl;
	cout<<"For triangle 2"<<endl;
    struct_sides sides1;
    trig_info trig_info1;
	sides1.a=5;
	sides1.b=12;
	trig_info1=Trig_calc(sides1);
	cout<<"Side 1 is "<<trig_info1.side_1<<endl;
    cout<<"Side 2 is "<<trig_info1.side_2<<endl;
	cout<<"Hypotenuse is "<<trig_info1.side_3<<endl;
	cout<<"Angle_1 is "<<trig_info1.angle_1<<" degree"<<endl;
	cout<<"Angle_2 is "<<trig_info1.angle_2<<" degree"<<endl;

	return 0;
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

trig_info Trig_calc(struct_sides sides0){
    
    trig_info trig_info0;

	trig_info0.side_1=sides0.a;
	trig_info0.side_2=sides0.b;
	trig_info0.side_3=Hypotenuse_calc(sides0.a,sides0.b);

	trig_info0.angle_1=Angle_1_calc(sides0.a,sides0.b);
	trig_info0.angle_2=Angle_2_calc(sides0.a,sides0.b);
	trig_info0.angle_3=90.;

	return trig_info0;
}