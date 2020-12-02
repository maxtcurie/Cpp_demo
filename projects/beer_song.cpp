//Created by Max Curie on 09/22/2020
#include <iostream> 
#include <chrono>
#include <thread>

using std:: cin ;
using std:: cout ;
using std:: endl ;

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
//*************Comments*********************
//Both: icpc -o beer_song.bin beer_song.cpp && ./beer_song.bin

int main() {
	
    int beer_tot=100;
    while(1){
    	for(int i=beer_tot;i>0;i--){
     		cout<<i <<" bottles of beer on the wall, " ;
     		cout<<i <<" bottles of beer. "<<endl;
     		cout<<"Take one down and pass it around, ";
     		cout<< i-1 <<" bottles of beer on the wall. "<<endl<<endl;
     		sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(2));
    	}
    	cout<<"No more beer, go to the mall, now we have "<<beer_tot<<" bottles more. "<<endl<<endl<<endl;
    }
        
    return 0;  //return 0 indicates that everythin went well
} 
