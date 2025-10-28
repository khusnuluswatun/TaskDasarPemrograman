#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//~ struct alamat{
	//~ string kota;
	//~ string kodepos;
//~ };

struct structNilai{
	string mka;
	int sks;
	string nilai;
	float harkat;
	//~ alamat address;
};

float totalSks, totalSksHarkat;
int n;


int main(){
	cout << "Mau input berapa data? ";
	cin >> n;
		cin.ignore();
	cout << "\n==========================\n\n";
	structNilai mhs[n];
	for(int a=0; a<n;a++){
		cout << "Data ke-" << a+1 << endl;
		cout << "MKA     :";
		getline(cin, mhs[a].mka);
		cout << "SKS     :";
		cin >> mhs[a].sks;
		cout << "Nilai   :";
		cin >> mhs[a].nilai;
		cin.ignore();
		cout << endl;
	}
	
	cout << setfill('-') << setw(90) << "" << endl;
	cout << setfill(' ') << setw(5) << left << "No." << setw(30) << "Nama MKA" << setw(10) << "SKS" << setw(10) << "Nilai"<< setw(10)  << "Harkat"<< setw(15)  << "SKS x Harkat" << endl;
	cout << setfill('-') << setw(90) << "" << endl;
	for(int b=0; b<n;b++){
		
		if(mhs[b].nilai == "A"){
			mhs[b].harkat = 4;
		}else if(mhs[b].nilai == "B"){
			mhs[b].harkat = 3;
		}else if(mhs[b].nilai == "B+"){
			mhs[b].harkat = 3.5;
		}else if(mhs[b].nilai == "C"){
			mhs[b].harkat = 2;
		}else if(mhs[b].nilai == "C+"){
			mhs[b].harkat = 2.5;
		}else if(mhs[b].nilai == "D"){
			mhs[b].harkat = 1;
		}else{
			mhs[b].harkat = 0;
		}
	
	cout << setfill(' ') << setw(5) << b+1 << setw(30) << left << mhs[b].mka << setw(10) << mhs[b].sks << setw(10) << mhs[b].nilai << setw(10) << fixed << setprecision(1) << mhs[b].harkat << setw(10)  << fixed << setprecision(1) << mhs[b].sks * mhs[b].harkat << endl;
		totalSks += mhs[b].sks;
		totalSksHarkat += mhs[b].sks * mhs[b].harkat;
	}
	
	cout << endl;
	cout << setfill('-') << setw(90) << "" << endl;
	cout << setfill(' ') << setw(35) << "Jumlah" << setw(10) << totalSks << setw(20)  << " "<< setw(15)  << totalSksHarkat << endl;
	
	
	cout << "\nIndeks Prestasi Semester (IPS) " << " = " << totalSksHarkat / totalSks;
}
