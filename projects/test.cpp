//by Max Curie on 10_15_2020
#include <iostream> 
#include <vector>

using std:: vector ;

using std:: cin ;
using std:: cout ;
using std:: endl ;


//*************Comments*********************
//Example for running: icpc -o a.bin test.cpp && ./a.bin

int main() {
	int n_neighbor=10;
	int population=200;

	vector <int> neighbor_list(0);
	for (int j=0;j<n_neighbor;j++){
		int neighbor_temp=rand() % population-1;
		cout<< " " <<neighbor_temp;
		neighbor_list.push_back(neighbor_temp);
	}	


    return 0;  //return 0 indicates that everythin went well
} 
