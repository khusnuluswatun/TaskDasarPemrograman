#include <iostream>
#include <iomanip>
using namespace std;
string nama, plug;
int nim; 

int luas,panjang,lebar;

int main(){
	cout << "Masukkan: " << endl;
	cout << "Nama: ";
	getline(cin, nama);
	cout << "NIM: ";
	cin >> nim;
	cin.ignore();
	cout << "Plug: ";
	getline(cin, plug);

	cout <<"\nInilah data Anda : \n"<< left << setw(10) << "Nama " << left << setw(3) << ":" << nama << "\n" << left << setw(10) << "NIM " << left << setw(3) << ":" << nim << "\n" << left << setw(10) << "Kelas " << left << setw(3) << ":" << plug;
	cout << "\n\nDalam bentuk tabel: \n";
	cout << "=======================================================" << endl;
	cout << left << setw(14) << "NIM" << "| " << setw(28) << "Nama" << "| " << setw(15) << "Plug" << endl;
	cout << left << setw(14) << nim << "| " << setw(28) << nama << "| " << setw(15) << plug << endl;


	cout << "\n\n\n=====================================================================" << endl;
	cout << "Rumus luas persegi panjang\nPanjang: ";
	cin >> panjang;
	cin.ignore();
	cout << "Lebar: ";
	cin >> lebar;
	cout << "\nLuas: " << panjang * lebar << endl;
	cout << "Keliling: " << 2*panjang + 2* lebar << endl;
	cout << "\n\n============================== end ==================================";
	return 0;
	
}
