#include <iostream>
#include <string>
using namespace std;

const int charLen = 20;
//todo Hey man, this messed up. Please convert code to use a char array instead of a string
int main() {
	//string first, second;
	char first[charLen];
	char second[charLen];
	int added[21];
	int carry = 0;
	int counter;

	// Get the values
	cout << "Enter the first number:";
	cin  >> first;
	cout << first;
	cout << "Enter the second number:";
	cin  >> second;

	// Convert digits to ints
	int x[first.length()], y[second.length()];
	
	// Define a counter 
	if(first.length() <= second.length()){
		counter = second.length();
	}else{
		counter = first.length();
	};

	for(int i = first.length(); i >= 0; i--){
		x[i] = first[i];
		cout << x[i];
	};
	cout << endl;

	for(int i = second.length(); i >= 0; i--){
		y[i] = second[i];
		cout << x[i];
	};
	cout << endl;

	// Add the arrays

	return 0;
}
