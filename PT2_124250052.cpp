#include <iostream>
using namespace std;

int main(){
	float tugas,postest,kuis,responsi,laporan;
	float total;
	string predikat;
	
	cout << "Masukkan nilai berikut.. " << endl;
	cout << "Tugas: ";
	cin >> tugas;
	cout << "Postest: ";
	cin >> postest;
	cout << "Kuis: ";
	cin >> kuis;
	cout << "Responsi: ";
	cin >> responsi;
	cout << "Laporan: ";
	cin >> laporan;
	
	cout << endl;
	cout << "Rekap nilai: " << tugas << ", " << postest << ", " << kuis <<  ", " << responsi <<  ", " << laporan << endl;
	
	total = ((tugas * 0.20) + (0.20 * postest) + (0.25 * kuis) + (0.25 * responsi) + (0.10 * laporan));
	
	
	if(total >= 85 && total <= 100){
		predikat = 'A';
	}else if(total >= 80 && total <= 85){
		predikat = "B+";
	}else if(total >= 75 && total <= 80){
		predikat = 'B';
	}else if(total >= 70 && total <= 75){
		predikat = "C+";
	}else if(total >= 60 && total <= 70){
		predikat = 'C';
	}else if(total >= 50 && total <= 60){
		predikat = 'D';
	}else if(total < 50 && total > 0){
		predikat = 'E';
	}else{
		predikat = "NOT VALID";
	}
	
	cout << "Nilai akhir Anda:  " << total << endl;
	cout << "Nilai huruf Anda: " << predikat;
	
}
