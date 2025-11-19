// Khusnul Uswatun Khasanah (124250052)
#include <iostream>
#include <iomanip>
using namespace std;

main(){
								 
	int pilihan,idDosenEdit, pilihanDosen, pilihanAdmin,pildaftar, pileditadm, persenKehadiran, persenTugas, persenUTS, persenUAS, persenProject, idMhsEdit;
	string unmDosen, pwDosen, unmAdmin, pwAdmin, namaMhs, namaBaruMhs, namaBaruDosen, emailBaruDosen;
	
								 
	string arrNamaMhs[20] = {"Aisyah Nurul","Budi Santoso","Citra Lestari","Dedi Kurniawan","Eka Pratama","Fajar H","Gina Sari","Hadi Wijaya","Intan Permata","Joko Susilo","Kartika Dewi","Luthfi Ramadhan","Maya Sari","Nanda","Oki","Putri","Rian","Siti","Taufik","Umi"};
	float arrKehadiran[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float arrTugas[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float arrUTS[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float arrUAS[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float arrProject[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float arrNilaiAkhir[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	string arrNamaDosen[10] = {"Dr. Andi Wijaya", "Sri Rahayu, M.Kom", "Bambang Supriyadi, M.T", "Indah Lestari, S.T, M.Eng", "Rina Marlina, M.Kom", "Agus Santoso, M.Cs", "Dewi Anggraini, S.Kom, M.T", "Ferry Kurniawan, M.Kom", "Lina Marlina, S.T., M.Eng", "Yusuf Hidayat, M.Cs"};
	string arrEmailDosen[10] = {"andiwijaya@gmail.com","rahayu123@gmail.com","b4supriyadi@gmail.com","ndahlestari89@gmail.com","rinrina74@gmail.com","agus18santoso@gmail.com","budewi@gmail.com","ferry2025@gmail.com","linlin45@gmail.com","yusufh1y@gmail.com"};
	
	int tempIdMhs;
	char lanjutDosen = 'y';
	char lanjutAdmin = 'y';
	
	cout << setfill('=') << setw(70) << " " << endl;
	cout << setfill(' ') << setw(70) << "SISTEM INFORMASI PENILAIAN MAHASISWA" << endl;
	cout << setfill('=') << setw(70) << " " << endl;
	cout << "1. Dosen" << endl;
	cout << "2. Admin" << endl;
	
	cout << "PILIHAN: ";
	cin >> pilihan;
	
	switch(pilihan){
		case 1:
			
			cout << "Username: ";
			cin >> unmDosen;
			for(int i=0;i<3;i++){
				cout << "Password: ";
				cin >> pwDosen;
			
				if(unmDosen != "dosen"){
					cout << "User tidak ditemukan" << endl; break;
				}else if(pwDosen != "dosen123"){
					cout << "Password Anda Salah\nMasukkan password anda lagi" << endl;
				}else{
					break;
				}
			}
			if(unmDosen != "dosen" || pwDosen != "dosen123"){
				exit(1);
			}
			
			cout << "Selamat Datang" << endl;
			cout << setfill('=') << setw(60) << " " << endl;
			cout << setfill(' ') << setw(60) << "DOSEN" << endl;
			
			do{
				cout << setfill('=') << setw(60) << " " << endl;
				cout << "1. Input Persentase Nilai" << endl;
				cout << "2. Input Nilai" << endl;
				cout << "3. Tampilkan Data" << endl;
				cout << "4. Keluar" << endl;
				cout << "PILIHAN: ";
				cin >> pilihanDosen;
				
				switch(pilihanDosen){
					case 1:
						cout << "Masukkan persentase untuk setiap komponen nilai (total harus 100%)\n\n";
						cout << "Persentase Kehadiran: ";
						cin >> persenKehadiran;
						cout << "Persentase Tugas: ";
						cin >> persenTugas;
						cout << "Persentase UTS: ";
						cin >> persenUTS;
						cout << "Persentase UAS: ";
						cin >> persenUAS;
						cout << "Persentase Project: ";
						cin >> persenProject;
						
						if(persenKehadiran+persenTugas+persenUTS+persenUAS+persenProject == 100){
							cout << "Persentase berhasil diubah";
						}else{
							cout << "Total persentase harus 100%. Silakan coba lagi.";
						}
						
					break;
						
					case 2:
					cout << "Masukkan id: ";
					cin >> tempIdMhs;
					cout << "Masukkan nilai untuk mahasiswa: ";
					cin >> namaMhs;
					
					if(arrNamaMhs[tempIdMhs-1] != namaMhs){
						cout << "Data nama mahasiswa tidak valid, silakan cek kembali!" << endl;
					}else{
						
						cout << "Kehadiran: ";
						cin >> arrKehadiran[tempIdMhs-1];
						cout << "Tugas: ";
						cin >> arrTugas[tempIdMhs-1];
						cout << "UTS: ";
						cin >> arrUTS[tempIdMhs-1];
						cout << "UAS: ";
						cin >> arrUAS[tempIdMhs-1];
						cout << "Project: ";
						cin >> arrProject[tempIdMhs-1];
						
						tempIdMhs = tempIdMhs-1;
						arrNilaiAkhir[tempIdMhs] = (arrKehadiran[tempIdMhs] + arrTugas[tempIdMhs] + arrUTS[tempIdMhs] + arrUAS[tempIdMhs] + arrProject[tempIdMhs]) / 5;
						cout << "Nilai Akhir: " << arrNilaiAkhir[tempIdMhs] << endl;
						cout << setfill('-') << setw(20) << " " << endl;
					
					}
					
					break;
					
					case 3:
						cout << "DATA NILAI MAHASISWA" << endl;
						cout << setfill('-') << setw(90) << " " << endl;
						cout << setfill(' ') << setw(5) << "ID" << setw(25) << "|Nama Mahasiswa" << setw(10) << "|Kehadiran" << setw(10) << "|Tugas" << setw(10) << "|UTS" << setw(10) << "|UAS" << setw(10) << "|Project" << setw(10) << "|Akhir" << endl;
						cout << setfill('-') << setw(90) << " " << endl;
						
						for(int a=0;a<20;a++){
							cout << setfill(' ') << setw(5) << a+1 << setw(25) << arrNamaMhs[a] << setw(10) << arrKehadiran[a] << setw(10) << arrTugas[a] << setw(10) << arrUTS[a] << setw(10) << arrUAS[a] << setw(10) << arrProject[a] << setw(10) << arrNilaiAkhir[a] << endl;
						}
						
						
					break;
					
					case 4:
						cout << "Sampai Jumpa!";
					break;
						
					default:
						cout << "Menu di luar jangkauan";
					break;
				}
				
				if(pilihanDosen == 1 || pilihanDosen == 2 || pilihanDosen == 3){
					do{
						cout << "\nApakah Anda ingin melanjutkan program?(y/n): ";
						cin >> lanjutDosen;
					}while(lanjutDosen != 'n' && lanjutDosen != 'y');
				}
				
			}while(pilihanDosen != 4 && lanjutDosen == 'y');
			
		
		break;
		case 2:
		
			
			cout << "Username: ";
			cin >> unmAdmin;
			for(int i=0;i<3;i++){
				cout << "Password: ";
				cin >> pwAdmin;
			
				if(unmAdmin != "admin"){
					cout << "User tidak ditemukan" << endl; break;
				}else if(pwAdmin != "admin123"){
					cout << "Password Anda Salah\nMasukkan password anda lagi" << endl;
				}else{
					break;
				}
			}
			if(unmAdmin != "admin" || pwAdmin != "admin123"){
				exit(1);
			}
			cout << "Selamat Datang" << endl;
			cout << setfill('=') << setw(60) << " " << endl;
			cout << setfill(' ') << setw(60) << "ADMIN" << endl;
			
			do{
				cout << setfill('=') << setw(60) << " " << endl;
				cout << "1. Daftar" << endl;
				cout << "2. Edit" << endl;
				cout << "3. Keluar" << endl;
				cout << "PILIHAN: ";
				cin >> pilihanAdmin;
				
				switch(pilihanAdmin){
					case 1:
						cout << "Daftar Mahasiswa dan Dosen" << endl;
						cout << setfill('-') << setw(20) << " " << endl;
						cout << "1. Daftar Mahasiswa" << endl;
						cout << "2. Daftar Dosen" << endl;
						cout << "PILIHAN: ";
						cin >> pildaftar;
						
						switch(pildaftar){
							case 1:
								cout << "DATA MAHASISWA" << endl;
								cout << setfill('-') << setw(50) << " " << endl;
								cout << setfill(' ') << setw(5) << "ID" << setw(35) << "|Nama Mahasiswa" << endl;
								cout << setfill('-') << setw(50) << " " << endl;
								
								for(int a=0;a<20;a++){
									cout << setfill(' ') << setw(4) << a+1 << "|" << setw(35) << arrNamaMhs[a] << endl;
								}
								cout << setfill('-') << setw(50) << " " << endl;
								
							break;
							case 2:
								cout << "DATA DOSEN DAN EMAIL" << endl;
								cout << setfill('-') << setw(65) << " " << endl;
								cout << setfill(' ') << setw(5) << "No" << setw(30) << "|Nama Dosen" << setw(30) << "|Email" << endl;
								cout << setfill('-') << setw(65) << " " << endl;
								
								for(int a=0;a<10;a++){
									cout << setfill(' ') << setw(4) << a+1 << "|" << setw(35) << arrNamaDosen[a] << setw(30) << arrEmailDosen[a] << endl;
								}
								cout << setfill('-') << setw(65) << " " << endl;
							break;
							default:
							cout << "Tidak ada";
							break;
						}
						
					break;
					case 2:
						cout << "Edit Mahasiswa dan Dosen" << endl;
						cout << setfill('-') << setw(20) << " " << endl;
						cout << "1. Edit Mahasiswa" << endl;
						cout << "2. Edit Dosen" << endl;
						cout << "PILIHAN: ";
						cin >> pileditadm;
						
						switch(pileditadm){
						
							case 1:
								cout << "Masukkan ID Mahasiswa yang akan diedit: ";
								cin >> idMhsEdit;
								cout << "Masukkan nama baru untuk Mahasiswa ID " << idMhsEdit << ":";
								cin.ignore();
								getline(cin, namaBaruMhs);
								arrNamaMhs[idMhsEdit-1] = namaBaruMhs;
								cout << "Data Mahasiswa berhasil diupdate";
								
							break;
							case 2:
								cout << "Masukkan ID Dosen yang akan diedit: ";
								cin >> idDosenEdit;
								cout << "Masukkan nama baru untuk Dosen ID " << idDosenEdit << ":";
								cin.ignore();
								getline(cin, namaBaruDosen);
								cout << "Masukkan email baru untuk Dosen ID " << idDosenEdit << ":";
								cin >> emailBaruDosen;
								arrNamaDosen[idDosenEdit-1] = namaBaruDosen;
								arrEmailDosen[idDosenEdit-1] = emailBaruDosen;
								
								cout << "Data Dosen berhasil diupdate";
							break;
							default:
							cout << "tidak ada";
							break;
						}
						
					break;
					case 3:
						cout << "Sampai Jumpa!";
					break;
						
					default:
						cout << "Menu di luar jangkauan";
					break;
				}
				
				if(pilihanAdmin == 1 || pilihanAdmin == 2 || pilihanAdmin == 3){
					do{
						cout << "\nApakah Anda ingin melanjutkan program?(y/n): ";
						cin >> lanjutAdmin;
					}while(lanjutAdmin != 'n' && lanjutAdmin != 'y');
				}
				
			}while(pilihanAdmin != 3 && lanjutAdmin == 'y');
		
		break;
		default:
		
		break;
	}
}
