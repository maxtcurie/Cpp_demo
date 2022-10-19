

#include <iostream>
#include <Eigen\Dense>

using namespace std;
using namespace Eigen;

int main(){
	//from: https://stackoverflow.com/questions/35827926/eigen-matrix-library-filling-a-matrix-with-random-float-values-in-a-given-range
	MatrixXd m = MatrixXd::Random(3,3);

	cout << 'm=\n' <<m <<endl;
}
