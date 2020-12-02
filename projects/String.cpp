#include <iostream> 
#include <string> //library string
using std:: cin ;
using std:: cout ;
using std:: endl ;
using std:: string ; //functin

//Comments
//Example for compiling: icpc -o String.bin String.cpp
//Example for running: icpc -o String.bin String.cpp && ./String.bin

int main() {
    string which_world;
    cout << "Which world you are in" << endl;
    cin >> which_world;
    //cout<<int(which_world)/4;
    cout << which_world<<endl;
    string hello_this_world;
    hello_this_world = "Hello creature in "+which_world+"!";
    cout << hello_this_world << endl;
    cout<<"***********"<<endl;
    string lower_case_alphabet="abcdefghijklmnopqrstuvwxyz";
    for(int j=0;j<26;j++){
        for(int i=0;i<10;i++){
        cout<<hello_this_world[i]<<' ';
        //if(hello_this_world[i]==hello_this_world[1]){
        if(hello_this_world[i]==lower_case_alphabet[j]){
            cout<<"i="<<i<<' ';
            break;

        }
        else if(hello_this_world[i]==' '){
            cout<<"i="<<i*100<<' ';
            break;

        }
    }

    }
    
    cout<<endl;
    return 0;
} 