
#include <iostream> 
#include <vector>

using std:: vector ;

using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for running: icpc -o vector.bin vector.cpp && ./vector.bin

//vector:  http://www.cplusplus.com/reference/vector/vector/

vector <int> a_calc(){
	vector <int> b(0);
	for(int i=0;i<10;i++){
		b.push_back(8);
	}
	
	return b;
}


int main() {
	vector <float> a(5);
	vector <float> b{10,20,30,40,50,60};
	vector <float> c={10,20,30,40,50,60};
	vector <float> d(25,3.15);
    
	a[1]=0.2;
	cout<<"a[1]= "<<a[1]<<endl;
	cout<<"a[2]= "<<a[2]<<endl;

	cout<<"b: "<<endl;
	for (float z: b){
		cout<<z<<endl;
	}

    cout<<"size of a: "<<a.size()<<endl;
	a.push_back(8);
	cout<<"a.push_back(8);"<<endl;
	cout<<"size of a: "<<a.size()<<endl;
	cout<<"a[5]: "<<a[5]<<endl;

	cout<<"a.back()"<<a.back()<<endl;


    a.pop_back();
	cout<<"a.pop_back();"<<endl;
	cout<<"size of a: "<<a.size()<<endl;
	//cout<<a.at(4)<<endl;
	//cout<<a.at(10)<<endl;
    


    //vector <float> row(20);
	//vector < vector <float> > N(10,row); //matrix

	// Define a function 
	vector <int> m(0);
	m=a_calc();
	for(int j : m){
		cout<<j<<endl;
	}
	
    return 0;  //return 0 indicates that everythin went well
} 
