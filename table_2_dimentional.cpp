#include<iostream>
using namespace std;

/*

	Two-dimensional tables.

*/


void multiplication(int n){

	// Variables.
	int i = 1;

	// Loop to get the multiplication table of n number.
	while (i <= 10){
		cout << n * i << "\t";
		i++; //i = i + 1;
	}
	cout << endl;
}

void multiplicationTable(){

	// Variables.
	int i = 1;

	// Loop to iterate through the rows.
	while(i <= 10){

		// Calling the function multiplication.
		multiplication(i);
		i++; //i = i + 1;
	}
}

int main(){

	// Calling the multiplicationTable function.
	multiplicationTable();

	return 0;
}
