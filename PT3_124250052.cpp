#include <iostream>
using namespace std;

int main(){
	int angka;
	int chance = 1;
	int key = 52;
	do{
		cout << "\nTebak angka: ";
		cin >> angka;
		
		if(angka != key){
			if(angka < key){
				cout << "Angka terlalu rendah\n";
			}else{
				cout  << "Angka terlalu tinggi\n";
			}
			chance++;
		}else{
			cout << "Selamat tebakan anda benar!\n";
		}
	}while(chance <= 3 && angka != key);
	
	if(chance > 3){
		cout << "\n\nAngka rahasianya adalah " << key;
	}
	
	return 0;
}
