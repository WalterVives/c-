#include<iostream>


using namespace std;


struct datosCarro
{
	int num_carro;
	double kilometraje;
	double lit_usados;
};

datosCarro listaC[5];


int main(){

	// Variables.
	double total_sum = 0;
	
for(int i=0;i<5;i++){

    cout << "\nNumero de carro " << i + 1 << ": ";
	cin >> listaC[i].num_carro;
	cout << "kilometraje carro " << i + 1 << ": ";
	cin >> listaC[i].kilometraje;
	cout << "litros usados " << i + 1 << ": ";
	cin >> listaC[i].lit_usados;

}

for(int i=0;i<5;i++){

    cout << i + 1 << "| Numero de carro "  << "\t"; 
	cout << i + 1 << "| millas por galón " << "\t\n";
	cout << "   " << listaC[i].num_carro << "\t\t\t";
	cout << "   " << (listaC[i].kilometraje / listaC[i].lit_usados) * 2.825 << endl << endl;

}


// sum all the gallons.
for(int j = 0; j < 5; j++){

	total_sum += (listaC[j].kilometraje / listaC[j].lit_usados) * 2.825;
}
cout << "\n\nMillas por galón promedio por la flotilla completa de automóviles: ";
cout << total_sum/2 << endl << endl;

return 0;
}





