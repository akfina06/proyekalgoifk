#include <iostream>
using namespace std;

char opsi;
int harga = 50000;
int pcs;
int totalHarga;
int diskon;

int main(){
	do{
		cout << "\nPILIH LOOPING\n";
		cout << "A. Pesan\n";
		cout << "B. Total Pesan\n";
		cout << "C. Keluar\n";
		cout << "Pilihan: "; cin >> opsi;
		switch(opsi){
			case 'A':
				cout << "\nBeli berapa baju? "; cin >> pcs;
				totalHarga = harga*pcs;
				break;
			case 'B':
				
				if (totalHarga >= 250000){
					diskon = totalHarga*2/10;
				}
				cout << "\nTotal harga baju Anda sebelum diskon: " << totalHarga;
				cout << "\nTotal harga baju Anda setelah diskon " << totalHarga-diskon;
				break;
			case 'C':
				break;
		}
	} while (opsi != 'C');
}
