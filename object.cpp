//by Max Curie on 10_15_2020
#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for running: icpc -o a.bin object.cpp && ./a.bin

class Point{
	//Not avaible to public
	private: 
		double px;//pravite x
		double py;//pravite y

	//required to be inputed from outside
	public:
		//kinda like structure
		//default values
		Point(){
			px=1;
			py=2;
		}

		//public input
		Point(double x, double y){
			px=x;
			py=y;
		}

		Point(double x){
			px=x;
			py=x;
		}

		//But one can define a function
		double sumc(float multiplier){
			return (px+py)*multiplier;
		}
		double getx(){
			return px;
		}
		double gety(){
			return py;
		}
		void setx(double x){
			px=x;
		}
		void sety(double y){
			py=y;
		}

};


int main() {
	Point p1 ;
	Point p2 (10.,20.);
	Point p3 (100.);
	float multiplier=42.;
	//cout<<"sum of p1 = "<< ( p1.x+p1.y ) <<endl;
	cout<<"sum of p1 = "<< p1.sumc(multiplier) <<endl;
	cout<<"sum of p2 = "<< p2.sumc(multiplier) <<endl;
    cout<<"sum of p3 = "<< p3.sumc(multiplier) <<endl;
    cout<<"x component of p3 = "<<p3.getx()<<endl;
    cout<<"y component of p3 = "<<p3.gety()<<endl;

    cout<<"reset x component of p3 to 300"<<endl;
    p3.setx(300);
    cout<<"x component of p3 = "<<p3.getx()<<endl;

    return 0;  //return 0 indicates that everythin went well
} 
