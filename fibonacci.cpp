#include<iostream>
using namespace std;


int fibonacci(int n){

if (n == 0 || n == 1){
	return n;

} else { 
	return (fibonacci(n - 1) + fibonacci(n - 2));
  }

}


int main(){

// Variables.
int n;
int i = 0;

// Initial message.
cout << "\nThis is a program to print the n first fibonacci numbers\n\n";

//Asking for the number.
cout << "Enter a number: ";
cin >> n;

// Calling the function n times.
while (i < n){
	cout << fibonacci(i) << " ";
	i++;
}
cout << endl << endl;

	return 0;
}


