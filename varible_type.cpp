#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;
using std:: string ;

//Comments
//Example for running: icpc -o a.bin varible_type.cpp && ./a.bin

//https://www.tutorialspoint.com/cplusplus/cpp_variable_types.htm
int main() {
  int i=1;
  cout<<"int i=1    "<<i<<endl;
  float j=1.;
  cout<<"float j=1   "<<j<<endl;
  double k=1.;
  cout<<"double k=1   "<<k<<endl;
  bool a=1; //True
  cout<<"bool a=1   "<<a<<endl;
  char b=126; //http://www.asciitable.com/
  cout<<"char b=126   "<<b<<endl;
  b='d';
  cout<<"char b=d   "<<b<<endl;
  string c="some words";
  cout<<"c=some words   "<<c<<endl;

} 