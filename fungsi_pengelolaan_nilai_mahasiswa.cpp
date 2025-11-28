#include <iostream>
using namespace std;

float hitungmean(float tugas, float uts, float uas);
char konversiNilai(float mean);
void hasil(string nama, float mean, char huruf);

int main() {
    string nama;
    float tugas, uts, uas;
    do{
		cout << "=== PROGRAM PENGELOLAAN NILAI MAHASISWA ===\n";
		cout << "Masukkan nama mahasiswa: ";
		getline(cin, nama);
		cout << "Nilai Tugas: ";
		cin >> tugas;
		cout << "Nilai UTS: ";
		cin >> uts;
		cout << "Nilai UAS: ";
		cin >> uas;
		float mean = hitungmean(tugas, uts, uas);
		char huruf = konversiNilai(mean);
		hasil(nama, mean, huruf);
	} while (tugas >= 0 || uts >= 0 || uas >= 0);
}

float hitungmean(float tugas, float uts, float uas){
    return (tugas + uts + uas) / 3.0;
}

char konversiNilai(float mean){
    if (mean >= 80){
        return 'A';
    }
    else if (mean >= 70){
        return 'B';
    }
    else if (mean >= 60){
        return 'C';
    }
    else if (mean >= 50){
        return 'D';
    }
    else{
        return 'E';
    }
}

void hasil(string nama, float mean, char huruf) {
    cout << "\n=== HASIL NILAI MAHASISWA ===\n";
    cout << "Nama Mahasiswa\t: " << nama << endl;
    cout << "Nilai Akhir\t: " << mean << endl;
    cout << "Nilai Huruf\t: " << huruf << endl<< endl;
}
