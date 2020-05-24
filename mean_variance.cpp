#include<iostream>
#include <chrono>
#include <unistd.h>

using namespace std;


double suma(int array[], int length){

	// Variables.
	int suma = 0;

	// For loop.
	for (int i = 0; i < length; i++){

		suma += array[i]; // suma = suma + array[i];
	}
	return suma;

}


void total(int array[], int length){

	cout << " [";
	for (int i = 0; i < length; i++){

		cout << array[i] << " ";

	}
	cout << "] ";
}


double calc_prom(int total_sum, int length){
	
	// Variables.
	double mean = (double(total_sum)/double(length));
	return mean;

}


double varianza(int array[], double mean, int length){
	
	// Variables.
	double sumatoria = 0.0;
	double var;

	//For loop to get the sum of (x - x̄)^2
	for(int i = 0; i < length; i++){
		
		sumatoria += ((array[i] - mean)*(array[i] - mean)); // sumatoria = sumatoria + ((array[i] - mean)*(array[i] - mean));

	}
	var = sumatoria / length;
	return var;
}


int main(){

	auto start = chrono::steady_clock::now();

	// do some stuff here
	// Variables.
	int valores_prueba[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
	int length = (sizeof(valores_prueba)/sizeof(valores_prueba[0])); // size of the array.
	double mean = calc_prom(suma(valores_prueba, length), length);
	double var = varianza(valores_prueba, mean, length);

	// Outputs.
	cout << "\nThe mean of:";
	total(valores_prueba, length);
	cout << "= " << mean << endl;
	cout << "The variance of:";
	total(valores_prueba, length);
	cout << "= " << var << endl << endl;


	auto end = chrono::steady_clock::now();

	cout << "Elapsed time in nanoseconds : " 
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;

	cout << "Elapsed time in microseconds : " 
		<< chrono::duration_cast<chrono::microseconds>(end - start).count()
		<< " µs" << endl;

	cout << "Elapsed time in milliseconds : " 
		<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
		<< " ms" << endl;

	cout << "Elapsed time in seconds : " 
		<< chrono::duration_cast<chrono::seconds>(end - start).count()
		<< " sec" << endl;

	return 0;
}
