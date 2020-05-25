#include<iostream>

using namespace std;


struct datosCarro{

	int num_carro;
	double kilometraje;
	double lit_usados;
};

// Create a list.
datosCarro listC[5];


void getRecords(){

	for(int i=0;i<5;i++){

		cout << "\nNumero de carro " << i+1 << ": ";
		cin >> listC[i].num_carro;
		cout << "Kilometraje carro " << i+1 << ": ";
		cin >> listC[i].kilometraje;
		cout << "Litros usados " << i+1 << ": ";
		cin >> listC[i].lit_usados;
	}
}

void millasGalon(){



for(int i=0;i<5;i++){

	// 
	int result = (listC[i].kilometraje / listC[i].lit_usados) * 2.825;

    cout << i + 1 << "| Numero de carro "  << "\t"; 
	cout << i + 1 << "| millas por galón " << "\t\n";
	cout << "   " << listC[i].num_carro << "\t\t\t";
	cout << "   " << result << endl << endl;

	}
}

void galonSum(){

	// Variables.
	double total_sum;

	// sum all the gallons.
	for(int j = 0; j < 5; j++){

		total_sum += (listC[j].kilometraje / listC[j].lit_usados) * 2.825;
	}

	cout << "\n\nMillas por galón promedio por la flotilla completa de automóviles: ";
	cout << total_sum/2 << endl << endl;
}

int main(){

	// Calling getRecords function.
	getRecords();

	// calling millasGalon function.
	millasGalon();

	// Calling galonSum function.
	galonSum();

	return 0;
}









