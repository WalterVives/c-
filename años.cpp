#include<iostream>

using namespace std;

// 1 year = 365 days
// 1 month = 30 days

 void calc_años(int dias, int &año, int &mes, int &dia){

	// operations.
	año = año + (dias / 365);
	mes = mes + ((dias % 365)/30);
	dia = dia + ((dias % 365)%30);
}

int main(){

	// Variabless.
	int total_dias = 0;
	int años = 1900;
	int mes = 1;
	int dia = 1;

	// Initial message.
	cout << "\n\n\nUn programa para calcular la fecha desde 1/1/1900 dado n días\n\n";
	cout << "Enter a number: ";
	cin >> total_dias;

	// calling the function.
	calc_años(total_dias, años, mes, dia);
	// Output.
	cout <<"\nLa fecha es: " << dia << "/" << mes << "/" << años << endl << endl;

	return 0;
}