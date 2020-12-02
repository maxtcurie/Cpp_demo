//File name: midterm.cpp
//Encode and decode a sentense
//Created by Max Curie on 10/20/2020
#include <iostream> 
#include <string> //library string


using std:: cin ;
using std:: cout ;
using std:: endl ;
using std:: string ; //functin
//*************Comments*********************
//Example for running: icpc -o a.bin midterm.cpp && ./a.bin

struct string_set{
	string words;
	int K;	
};

string read_string(string_set input_string_set0); 

char encode(char input_char, int K);

int main() {
	string_set input;
	string_set output;
	input.words="Life the universe and everything equals 42";
	cout<<"Shifting integar K = "<<endl;
	cin>>input.K;
    output.words=read_string(input);
    output.K=-input.K;
    cout<<"Original words:  "<<input.words<<endl;
    cout<<"Encrypted words: "<<output.words<<endl;
    cout<<"Decrypted words: "<<read_string(output)<<endl;

	return 0;
} 


string read_string(string_set input_string_set0){
	string output_words=input_string_set0.words;
	for (int i=0;i<input_string_set0.words.length();i++) {
		output_words[i]=encode(char(input_string_set0.words[i]), input_string_set0.K);
	}
	return output_words;
}


char encode(char input_char, int K){
	char output_char;
	//string lower_case_alphabet="abcdefghijklmnopqrstuvwxyz";
	//string Upper_case_alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	//cout<<input_char;

	for (int i=0;i<26;i++) {

		if(65<=input_char and input_char<=90){
			output_char=65+(input_char-65+K)%26;
			return output_char;
			break;
		}
		else if(97<=input_char and input_char<=122){
			//cout<<"*2*"<<input_char;
			output_char=97+(input_char-97+K)%26;
			return output_char;
			break;
		}
		else if(input_char==32){//If char=' '
			output_char=63;     // output='?'
			return output_char;
			break;
		}
		else if(input_char==63){//If char=' '
			output_char=32;     // output='?'
			return output_char;
			break;
		}
		else if(47<input_char and input_char<58){//if char is from 0-9
			output_char=input_char-10;           //Please check one https://www.learncpp.com/cpp-tutorial/chars/
			return output_char;
			break;
		}

		else if(37<input_char and input_char<48){//if char is from 0-9
			output_char=input_char+10;           //Please check one https://www.learncpp.com/cpp-tutorial/chars/
			return output_char;
			break;
		}

		else{
			output_char=input_char;
			return output_char;
			break;
		}
	}	
}
