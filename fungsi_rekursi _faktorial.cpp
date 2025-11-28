#include <iostream>
using namespace std;

int faktorial(int n);

int main() {
	int angka;
	do {
		
		cout << "Masukkan angka: "; cin >> angka;
		if (angka < 0){
			cout << "Angka harus bernilai positif (lebih dari 0)\n";
		}
		else {
			cout << "Hasil faktorial dari " << angka << " = " << faktorial(angka);
		}
	} while(angka < 0);
}

int faktorial(int n) {
	if (n == 1 || n ==0) {
		return 1;
	}
	return n * faktorial(n-1);
}

/* 5! = 5 * 4!
   4! = 4 * 3!
   3! = 3 * 2!
   2! = 2 * 1!
   1! = 1
 */
