//Created by Max Curie on 10/13/2020
#include<random>
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

//*************Comments*********************
//Example for running: icpc -o a.bin vector_combine.cpp && ./a.bin



vector<int> make_random_vector(int count);
void print_myvector(vector<int> printThis);

vector<int> combineV(vector<int> &A, vector<int> &B);

int main(){
	srand((unsigned)time(0));
	vector<int> vectorA = make_random_vector(10);
	vector<int> vectorB = make_random_vector(10);
    

    cout << "vector a:" << endl;
	print_myvector(vectorA);
	cout << "vector b:" << endl;
	print_myvector(vectorB);

	//cout<< "size of a: "<<vectorA.size()<<endl;
	//cout<< "size of b: "<<vectorB.size()<<endl;

    vector<int> vectorC = combineV(vectorA, vectorB);

	
	cout << "vector c (combine a and b):" << endl;
	print_myvector(vectorC);

	cout<< "size of a: "<<vectorA.size()<<endl;
	cout<< "size of b: "<<vectorB.size()<<endl;
	//cout<< "size of c: "<<vectorC.size()<<endl;

	return 0;
}

vector<int> make_random_vector(int count){

	int i;
	vector<int> myRandomVector;
	for (int j=0; j<count; j++){
		i = (rand()%32) + 1;
		myRandomVector.push_back(i);
	}

	return myRandomVector;
}

void print_myvector(vector<int> printThis){
	for (int m: printThis){
		cout << m << ' ';
	}
	cout<<endl;
}

vector<int> combineV(vector<int> &A, vector<int> &B){
	vector<int> C;

	for (int val: A){
		C.push_back(A.front()); // What is in the first element
		A.erase(A.begin()); //The first element number
	}

	for (int val: B){
		C.push_back(B.front()); // What is in the first element
		B.erase(B.begin()); //The first element number
	}

	return C;
}