#include <iostream>
using namespace std;

int main(){
	int opsi;
	do{
		int angka = 5;
		int x = 5;
		cout << "PILIH SALAH SATU MENU BERIKUT\n";
		cout << "1. Tampilkan angka 1-5\n";
		cout << "2. Tampilkan angka 6-10\n";
		cout << "Masukkan pilihan Anda: ";
			cin >> opsi;
		switch(opsi){
			case 1:
				
				cout << "\nBerikut adalah angka 1-5\n";
				for (int i=1; i<=angka; i++){
					cout << i << endl;
				}
				break;
				
			case 2:
				while(x < 10){
					x++;
					cout << x << endl;
				}
				break;
			default:
				cout << "\nPilih opsi antara 1 atau 2!";
		}
	} while (opsi != 1 && opsi != 2);

	if (opsi == 1 || opsi == 2){
		cout << "Program berhasil tampil";
	}
}
