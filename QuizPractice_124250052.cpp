#include <iostream>
#include <iomanip>
using namespace std;

main(){
	
	int idKasir, shift, pilihan, noHidangan,jumlahBeli, uangDibayar, totalHarga;
	string namaPembeli;
	int jmlAddMenu = 0;
	int jmlMenuNow = 5;
	char lanjut = 'y';
	string namaKasir[5] = {"Khusnul","Tingky","Dipsy","Nana","Lalapo"};
	string menu[50] = {"Nasi Goreng Spesial", "Mie Goreng Spesial", "Ayam Geprek", "Pecel Lele", "Nasi Uduk"};
	int harga[50] = {15000, 15000, 20000, 18000, 12000};
	
	cout << left << setw(20) << "Id Kasir" << ": ";
	cin >> idKasir;
	cout << left << setw(20) << "Shift Kasir (1/2/3)" << ": ";
	cin >> shift;
	
	cout << endl;
	//~ system("cls");
	if(idKasir < 1 || idKasir > 5){
		cout << "ID Kasir Tidak Ditemukan";
	}else if(shift < 1 || shift > 3){
		cout << "Shift Tidak Ditemukan";
	}else{
		cout << "Halo, " << namaKasir[idKasir-1] << " Kamu Bekerja Pada Shift ke- " << shift << " Hari Ini. Semangat!" << endl;
		
		do{
			cout << endl;
			cout << setfill('=') << setw(70) << " " << endl;
			cout << setfill(' ') << "Kasir LEZATOS" << endl;
			cout << setfill('=') << setw(70) << " " << endl;
			cout << "1. Daftar menu" << endl;
			cout << "2. Pembelian menu" << endl;
			cout << "3. Tambah Data menu" << endl;
			cout << "4. Keluar" << endl;
			cout << "PILIHAN: ";
			cin >> pilihan;
			cout << endl;
			
			switch(pilihan){
				case 1: //daftar menu
					cout << "DAFTAR HIDANGAN" << endl;
					cout << setfill('-') << setw(60) << " " << endl;
					cout << setfill(' ') << left << setw(5) << "No." << "| " << left << setw(30) << "Hidangan" << "| "  << left << setw(15) << "Harga" << endl;
					cout << setfill('-') << setw(60) << " " << endl;
					
					for(int i=0;i<jmlMenuNow;i++){
						cout << setfill(' ') << left << setw(5) << i+1 << "| " << left << setw(30) << menu[i] << "| " << left << setw(15)  << harga[i] << endl;
					}
					
					cout << setfill('-') << setw(60)  << " " << endl;
					break;
				
				case 2: //pembelian menu
					cout << "INPUT PEMBELIAN" << endl;
					cout << setfill('-') << setw(60) << " " << endl;
					cout << setfill(' ') << setw(36) << "Masukkan Nama Pembeli" << ": ";
					cin.ignore();
					getline(cin, namaPembeli);
					
					//back if hidangan tidak ada di list
					ygbenardong:
					cout << setfill(' ') << setw(36) << "Masukkan Nomor Hidangan" << ": ";
					cin >> noHidangan;
					if (noHidangan > jmlMenuNow || noHidangan < 1){
						cout << "No hidangan " << noHidangan << " tidak ada, harap input dengan benar" << endl;
						goto ygbenardong;
					}
					cout << setfill(' ') << setw(36) << "Masukkan Jumlah" << ": ";
					cin >> jumlahBeli;
					
					totalHarga = harga[noHidangan-1]*jumlahBeli;
					
					cout << "\nDATA PEMBELIAN" << endl;
					cout << setfill('-') << setw(60) << " " << endl;
					cout << setfill(' ') << setw(36) << "Nama Pembeli" << ": " << namaPembeli << endl;
					cout << setfill(' ') << setw(36) << "Nama Hidangan" << ": " << menu[noHidangan-1] << endl;
					cout << setfill(' ') << setw(36) << "Harga Hidangan" << ": " << harga[noHidangan-1] << endl;
					cout << setfill(' ') << setw(36) << "Jumlah Pembelian" << ": " << jumlahBeli << endl;
					cout << setfill(' ') << setw(36) << "Total Harga" << ": " << totalHarga << endl;
					
					cout << "\nINPUT PEMBAYARAN" << endl;
					cout << setfill('-') << setw(60) << " " << endl;
					
					bayarlagi:
					cout << setfill(' ') << setw(36) << "Masukkan Jumlah Uang yang Dibayar" << ": ";
					cin >> uangDibayar;
					
					if(uangDibayar > totalHarga){
						cout << setfill(' ') << setw(36) << "Kembali" << ": " << uangDibayar - totalHarga << endl;	
					}else if(uangDibayar < totalHarga){ //kalo uangnya kurang
						cout << "Maaf uangnya kurang " << totalHarga - uangDibayar << " :(" << endl;
						goto bayarlagi;
					}
					
					break;
					
					
				case 3:
					jmlAddMenu = 0;
					cout << "TAMBAH DATA Menu" << endl;
					cout << setfill('-') << setw(60) << " " << endl;
					cout << "Ingin tambah berapa menu? : ";
					cin >> jmlAddMenu;
					
					if(jmlAddMenu > 0){
						for(int i=jmlMenuNow; i <jmlMenuNow+jmlAddMenu;i++){
							cout << "\nData Hidangan ke-" << i+1 << endl;
							cout << setfill('=') << setw(25) << " " << endl;
							cout << "Masukkan Nama Hidangan: ";
							cin.ignore();
							getline(cin, menu[i]);
							cout << "Masukkan Harga Hidangan: ";
							cin >> harga[i];
							cout << setfill('=') << setw(25) << " " << endl;
						}
						
						cout << "\nHidangan berhasil ditambahkan!";
						jmlMenuNow += jmlAddMenu;
					}
					break;
				
				case 4:
					cout << "Terima kasih telah menggunakan program ini!" << endl;
					break;
				
				default:
					cout << "Mohon untuk memilih menu 1-4. Terima kasih :)" << endl;
					break;
				
			}
			
			if(pilihan != 4){
				do{
					cout << "\nApakah anda ingin melanjutkan program? (y/n): ";
					cin >> lanjut;
				}while(lanjut != 'y' && lanjut != 'n');
			}
			
		}while(lanjut == 'y' && pilihan != 4);
	}
	
}
