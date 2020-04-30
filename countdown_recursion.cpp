#include<iostream> 
using namespace std;


void countdown(int n){

	if (n < 0){

		cout << "\nBlastoff!\n" << endl;
	} else {

		cout << n << endl;
		countdown(n-1);
	}
}



int main(){

	// Variables.
	int n;

	// Initial message.
	cout << "\t\n\nThis is a program to print all the numbers from n to 0 recursively.\n\n";

	// Asking for a number.
	cout << "\nEnter a number: ";
	cin >> n;

	// Calling the function countdown.
	countdown(n);


	return 0;
}