#include<iostream>
#include<cmath>

using namespace std;

// I dunno why the cin don't catch the input and storage it into degree. 

int main(){

	double pi = acos(-1.0); // cpp converts automaticaly int to float.
	//double degree;
	double degree = 90;
	double angle = (degree * 2.0 * pi) / 360.0;

	cout << "\n A program to convert degree to rad\n\n";
	//cout << "Enter the number: ";
	//cin >> degree;
	cout << degree <<"º " << "is equal to " << angle << "rad\n" << endl; 


	return 0;

}
