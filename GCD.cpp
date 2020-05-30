#include<iostream>
using namespace std;


int GCD(int numero1, int numero2){


	if (numero2 != 0){
		return GCD(numero2, numero1 % numero2);
	}else{
		return numero1;
	}
}


int main(){2

	// Variables.
	int numero1;
	int numero2;
	int resultado;


	// Initial message.
	cout <<"\n\n\tMaximo Común Divisor\n\n";

	// Asking for the numbers.
	cout << "Ingresa el primer número: ";
	cin >> numero1;
	cout << "Ingresa el segundo número: ";
	cin >> numero2;


	// Calling the function.
	resultado = GCD(numero1, numero2);
	cout << endl;
    cout << "GCD de " << numero1 << " y " <<  numero2 << " es: " << resultado;
    cout << endl << endl;


	return 0;
}