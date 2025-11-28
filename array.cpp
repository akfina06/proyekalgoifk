#include <iostream>
using namespace std;

void array1D();
void array2D();
void array3D();

void array1D(){
	int nilai[3] = {90,40,60};
	for (int i = 0; i < 3; i++){
		cout << "Nilai ke-" << i+1 << " = " << nilai[i] << endl;
	}
}

int main(){
	cout << "Array 1 Dimensi:\n";
	array1D();
	cout << endl << endl;
	cout << "Array 2 Dimensi:\n";
	array2D();
	cout << endl << endl;
	cout << "Array 3 Dimensi:\n";
	array3D();
	cout << endl << endl;
}

void array2D(){
	int matriks[2][3] = {{10, 20, 30}, {40, 50, 60}};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++) {
			cout << "Nilai matriks[" << i+1 << "][" << j+1 << "] = " << matriks[i][j] << endl;
		}
	}
}

void array3D(){
	int elemen[2][2][3] = {{{10, 20, 30},
						    {40, 50, 60}},
						   {{70, 80, 90},
						    {100, 110, 120}}};
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			for(int k = 0; k < 3; k++) {
				cout << "Nilai elemen[" << i+1 << "][" << j+1 << "][" << k+1 << "] = " << elemen[i][j][k] << endl;
			}
		}
	}
}
