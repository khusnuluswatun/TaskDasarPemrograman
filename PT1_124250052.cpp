#include <iostream>
using namespace std;

int main(){
	float nilai[5];
	float rata;
	
	cout << "Input nilai UTS: " << endl;
	cout << "Nilai 1: "; cin >> nilai[0];
	cout << "Nilai 2: "; cin >> nilai[1];
	cout << "Nilai 3: "; cin >> nilai[2];
	cout << "Nilai 4: "; cin >> nilai[3];
	cout << "Nilai 5: "; cin >> nilai[4];
	
	cout << "\n===============================================\nBerikut daftar nilai yang sudah diinputkan: " << endl;
	cout << "Mahasiswa 1: " << nilai[0] << endl;
	cout << "Mahasiswa 2: " << nilai[1] << endl;
	cout << "Mahasiswa 3: " << nilai[2] << endl;
	cout << "Mahasiswa 4: " << nilai[3] << endl;
	cout << "Mahasiswa 5: " << nilai[4] << endl;
	
	rata = (nilai[0]+nilai[1]+nilai[2]+nilai[3]+nilai[4])/5;
	
	cout << "\nRata-rata nilai = " << rata;
	
}
