#include<iostream>
using namespace std;


int factorial(int n){

	if (n == 0){
		return 1;

	} else {
		return (n * factorial(n-1));
	}

}


int factorialTotal(int number){

	// Varaibles.
	int i = 1;

	// Loop while to print the n first factorials numbers.
	while(i <= number){
		cout << "The factorial of " << i << " = " << factorial(i);
		cout << endl;
		i++; 
	}
	return 0;
}


int main(){

	// Variables.
	int number;

	// Initial message.
	cout << "\t\n\nThis is a program to show the first n factorial numbers.\n\n" << endl;

	// Asking for the number.
	cout << "Enter a number: ";
	cin >> number;
	cout << endl;

	// Calling the function.
	factorialTotal(number);

	cout << endl;


	return 0;

}