#include<iostream>
using namespace std;




void even(int number){

	// Operation.
	if (number%2 == 0){

		cout<< number << " is even :)\n";
	}else{

		cout<< number << " is not even :(\n";

	}

}


int main(){

	// Variables.
	int number;

	// Initial menssage.
	cout << "\t\n\nThis is a program to determinate if a number is even or not.";
	cout << "\n\n";

	// Asking for the number.
	cout << "Enter the number: ";
	cin >> number;
	cout << "\n";

	// Calling the function even.
	even(number);
	cout << "\n";

	

	return 0;

}