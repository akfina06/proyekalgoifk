#include <iostream>
using namespace std;

int main() {
  int baris, kolom;
  cout << "Masukkan Jumlah Baris Matrik : ";
  cin >> baris;
  cout << "Masukkan Jumlah Kolom Matrik : ";
  cin >> kolom;
  int matriks[baris][kolom];
  cout << "Masukkan nilai Matriks" << endl;
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << "[" << i << "][" << j << "] = ";
      cin >> matriks[i][j];
    }
  }
  cout << "\nTampilan Matriks" << endl;
  for (int i = 0; i < baris; i++) {
    cout << "| ";
    for (int j = 0; j < kolom; j++) {
      cout << matriks[i][j] << " | ";
    }
    cout << endl;
  }
  return 0;
}