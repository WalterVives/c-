#include<iostream>
using namespace std;
#include<string>



void star(int n){

	// Variables.
	int i = 1;
	char s = '*';

	// Loop to print the stars.
	while(i <= n){
		
		cout << string(i, s) << endl; // using the string function from string header,
									  // to multiplicate a char for an integer.
		i++;
	}

}

int main(){

	// Variables.
	int number;

	cout << "\n\n\tPyramid <3\n\n";
	cout << "\n\nEnter a number: ";
	cin >> number;

	// Calling the star function.
	star(number);

	return 0;

}