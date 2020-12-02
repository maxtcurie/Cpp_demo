//File name: object_trig.cpp
//Calculate trig in memory of an attractive math teacher Jamie once had.
//Created by Max Curie on 10/24/2020
#include <iostream> 
#include <math.h>

using std:: cin ;
using std:: cout ;
using std:: endl ;
//*************Comments*********************
//Example for compiling: icpc -o test.bin test.cpp
//Example for running: icpc -o a.bin object_trig.cpp && ./a.bin

class trig_calc{
	//Not avaible to public
	private: 
		double lx;//pravite length x
		double ly;//pravite length y

	//required to be inputed from outside
	public:
		//kinda like structure
		//default values
		trig_calc(){
			lx=3;
			ly=5;
		}

		//public input
		trig_calc(double x, double y){
			lx=x;
			ly=y;
		}

		trig_calc(double x){
			lx=x;
			ly=x;
		}

		//But one can define a function
		
		double getx(){
			return lx;
		}
		double gety(){
			return ly;
		}
		void setx(double x){
			lx=x;
		}
		void sety(double y){
			ly=y;
		}

		float Hypotenuse_calc(){
			float Hypotenuse=sqrt(pow(lx,2.)+pow(ly,2.));
			return Hypotenuse;
		}

		float Angle_1_calc(){
			float Angle_1=atan(lx/ly)*180./3.14159265359;
			return Angle_1;
		}
		float Angle_2_calc(){
			float Angle_2=atan(ly/lx)*180./3.14159265359;
			return Angle_2;
		}

};


int main() {
	cout<<"In memory of an attractive math teacher Jamie once had. "<<endl;
	
	cout<<"For triangle 1"<<endl;
    trig_calc trig1(3.,4.);
    cout<<"Side 1 is "<<trig1.getx()<<endl;
    cout<<"Side 2 is "<<trig1.gety()<<endl;
    cout<<"Hypotenuse is "<<trig1.Hypotenuse_calc()<<endl;
	cout<<"Angle_1 is "<<trig1.Angle_1_calc()<<" degree"<<endl;
	cout<<"Angle_2 is "<<trig1.Angle_2_calc()<<" degree"<<endl;

    cout<<"*****************"<<endl;
	cout<<"For triangle 2"<<endl;
	trig1.setx(5.);
	trig1.sety(12.);
    cout<<"Side 1 is "<<trig1.getx()<<endl;
    cout<<"Side 2 is "<<trig1.gety()<<endl;
    cout<<"Hypotenuse is "<<trig1.Hypotenuse_calc()<<endl;
	cout<<"Angle_1 is "<<trig1.Angle_1_calc()<<" degree"<<endl;
	cout<<"Angle_2 is "<<trig1.Angle_2_calc()<<" degree"<<endl;
    

	return 0;
} 


