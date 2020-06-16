#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;


void escribir(){

	ofstream archivo;
	archivo.open("automoviles.txt", ios::out);// Open the file.

	if(archivo.fail()){
		cout << "The file could not be opened";
		exit(1);
	}else{

		archivo << "54,250,19" << endl;
		archivo << "62,525,38" << endl;
		archivo << "71,123,6" << endl;
		archivo << "85,1322,86" << endl;
		archivo << "97,235,14";
		archivo.close(); // close the file.
	}

}




int main(){

	// Calling the escribir function.
	escribir();

	return 0;
}
