// Sistem Pangkat Dua Bilangan
#include <iostream>
using namespace std;

int kuadrat(int bilangan);

int main(){
	int bilangan = 10;
	cout << "Langsung Cout: " << kuadrat(bilangan) << endl;
	cout << "Nilai bilangan awal: " << bilangan << endl;
		bilangan = kuadrat(bilangan);
	cout << "Nilai bilangan setelah fungsi: " << bilangan << endl;
}

int kuadrat(int bilangan){
	return  bilangan * bilangan;
}
