#include <iostream>
using namespace std;

void nilaiMahasiswa (int nilaiAkhir) {
	
	string nilaiAkhirMahasiswa = "B";
	
	if (nilaiAkhir >= 75) {
		nilaiAkhirMahasiswa = "A";
	}
	else if (nilaiAkhir >= 60) {
		nilaiAkhirMahasiswa = "B";
	}
	else if (nilaiAkhir >= 45) {
		nilaiAkhirMahasiswa = "C";
	}
	else if (nilaiAkhir >=40) {
		nilaiAkhirMahasiswa = "D";
	}
	
	cout << "Hasil Akhir adalah " << nilaiAkhirMahasiswa << " ";
}

int main() {
	nilaiMahasiswa (65);
	
	return 0;
}
