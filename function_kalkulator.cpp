#include <iostream>
using namespace std;

void tampilan();
int tambah(int bil1, int bil2);
int kurang(int bil1, int bil2);
int kali(int bil1, int bil2);
int bagi(int bil1, int bil2);

int main() {
	int bil1, bil2;
	tampilan();
	cout << "Sistem Kalkulator Sederhana\n";
	tampilan();
	cout << "Input bilangan 1: "; cin >> bil1;
	cout << "Input bilangan 2: "; cin >> bil2;
	cout << "Hasil Tambah: " << tambah(bil1, bil2) << endl;
	cout << "Hasil Kurang: " << kurang(bil1, bil2) << endl;
	cout << "Hasil Kali: " << kali(bil1, bil2) << endl;
	cout << "Hasil Bagi: " << bagi(bil1, bil2) << endl;
	tampilan();
}

void tampilan(){
	cout << "=========================" << endl;
}

int tambah(int bil1, int bil2){
	return bil1 + bil2;
}

int kurang(int bil1, int bil2){
	return bil2 - bil1;
}

int kali(int bil1, int bil2){
	return bil1 * bil2;
}

int bagi(int bil1, int bil2){
	return bil2 / bil1;
}
