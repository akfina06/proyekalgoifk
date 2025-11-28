#include <iostream>
#define PI 3.14
using namespace std;

int pilihan;
void volumeTabung(); // LA * t
void volumeKerucut(); // 1/3 * LA * T
void operasiSegitiga();
void operasiPersegiPanjang();
int luasSegitiga(int alas, int tinggi);
void kelilingSegitiga();
int luasPersegipanjang(int panjang, int lebar);
int kelilingPersegipanjang(int panjang, int lebar);
int luasLingkaran(int r); // pi * r * r

int main(){
	do{
		cout << "Sistem Penghitung Bangun Datar & Bangun Ruang\n";
		cout << "1. Volume Tabung\n";
		cout << "2. Volume Kerucut\n";
		cout << "3. Operasi Segitiga\n";
		cout << "4. Operasi Persegi Panjang\n";
		cout << "5. Keluar\n";
		cout << "Masukkan pilihan Anda: "; cin >> pilihan;
		switch(pilihan){
			case 1:
				cout << "Hitung volume tabung\n";
				volumeTabung();
				break;
			case 2:
				cout << "Hitung volume kerucut\n";
				volumeKerucut();
				break;
			case 3:
				cout << "Operasi segitiga\n";
				operasiSegitiga();
				break;
			case 4:
				cout << "Operasi persegi panjang\n";
				operasiPersegiPanjang();
				break;
			case 5:
				break;
			default:
				cout << "Pilihan invalid.\n";
		}
	} while(pilihan != 5);
}

int luasLingkaran(int luas){
	int r;
	cout << "Input jari-jari: "; cin >> r;
	luas = PI * r * r;
	return luas;
}
	
void volumeTabung(volume){
	luasLingkaran(luas);
	int t;
	cout << "Masukkan tinggi tabung: "; cin >> t;
	int volume = luasLingkaran(luas) * t;
	return volume;
}

void volumeKerucut(){

}
