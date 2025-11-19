#include <iostream>
#include <iomanip>
using namespace std;
string username = "khusnul";
string password = "123";
int jmlAwal = 0;
int ttlPendapatan = 0;

struct listbuku{
	string judul;
	int harga, stok;
};
listbuku lb[20];

void login();
void menu();
void tambahDataBuku();
void showDaftarBuku();
void penjualanBuku();
void totalPendapatan();

int main(){
	login();
	menu();
}

void login(){
	string unm, pw;
	cout << "+---------------------------------+" << endl;
	cout << "|              LOGIN              |" << endl;
	cout << "+---------------------------------+" << endl;
	
	for(int i=3;i>=1;i--){
		cout << "\nKesempatan tersisa: " << i << endl;
		cout << "Masukkan username: ";
		cin >> unm;
		cout << "Masukkan password: ";
		cin >> pw;
		
		if(unm != username || pw != password){
				cout << "\nUsername atau password salah. ";
			if(i != 1){
				cout << "Coba lagi.";
			}else{
				cout << "Kesempatan habis.\n\nAkses ditolak! Program akan keluar.";
			}
			cout << endl;
		}else{
			break;
		}
	}
	if(unm != username || pw != password){
		exit(1);
	}else{
		cout << "\nLogin berhasil! Selamat datang.\n" << endl;
	}
}

void cekFailInput(){ //handling untuk int yg diinput string
	if(cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
	}
}

void menu(){
	int pilihan;
	char lanjut;
	cout << "+------------------------------------------------------+" << endl;
	cout << "|                       GRAMEDIA                       |" << endl;
	cout << "+------------------------------------------------------+" << endl;
	
	do{
		cout << "1. Tambah Data Buku"<< endl;
		cout << "2. Tampilkan Daftar Buku"<< endl;
		cout << "3. Penjualan Buku"<< endl;
		cout << "4. Lihat Total Pendapatan"<< endl;
		cout << "5. Keluar"<< endl;
		
		do{
			cout << "\nMasukkan pilihan : ";
			cin >> pilihan;
			
			cekFailInput();
			
			if(pilihan != 1 &&pilihan != 2 &&pilihan !=3 &&pilihan != 4 &&pilihan != 5) cout << "Input salah";
		}while(pilihan != 1 &&pilihan != 2 &&pilihan !=3 &&pilihan != 4 &&pilihan != 5);
		
		switch(pilihan){
			case 1:
				tambahDataBuku();
			break;
			case 2:
				showDaftarBuku();
			break;
			case 3:
				penjualanBuku();
			break;
			case 4:
				totalPendapatan();
			break;
			case 5:
				cout << "\nTerima kasih telah menggunakan program ini!" << endl;
			break;
			case 6:
				cout << "Menu tidak ada!" << endl;
			break;
		}
		
		if(pilihan == 1 || pilihan == 2 || pilihan == 3 || pilihan == 4){
			do{
				cout << "\nApakah anda ingin melanjutkan program? (y/n): " ;
				cin >> lanjut;
				if(lanjut != 'y' && lanjut != 'n') cout << "Masukkan y/n saja" << endl;
			}while(lanjut != 'y' && lanjut != 'n');
		}
		
		cout << endl;
	}while((pilihan > 0 || pilihan < 6) && pilihan != 5 && lanjut == 'y');
	if(lanjut == 'n') cout << "Terima kasih telah menggunakan program ini!" << endl;
}


void tambahDataBuku(){
	int jml;
	cout << "+------------------------------------------+" << endl;
	cout << "|             TAMBAH DATA BUKU             |" << endl;
	cout << "+------------------------------------------+" << endl;
	cout << "Masukkan jumlah buku yang akan didata: ";
	cin >> jml;
	
	for(int a=jmlAwal;a<jmlAwal+jml;a++){
		cout << "-----------------" << endl;
		cout << "Buku ke-" << a+1 << endl;
		cout << "Judul buku: ";
		cin.ignore();
		getline(cin, lb[a].judul);
		cout << "Harga buku: ";
		cin >> lb[a].harga;
		cout << "Stok buku : ";
		cin >> lb[a].stok;
		cout << endl;
	}
	jmlAwal += jml; //menambah jumlah awal buku
	cout << "Data buku berhasil ditambahkan." << endl;	
	
}
void showDaftarBuku(){
	if(jmlAwal == 0){
		cout << "Koleksi buku masih kosong, silahkan tambah data di menu 1" << endl;
	}else{
		cout << "+------------------------------------------------------------------+" << endl;
		cout << "|                          KOLEKSI BUKU                            |" << endl;
		cout << "+------------------------------------------------------------------+" << endl;
		cout << "|" << setw(5) << "No" << " | " << setw(30) << left << "Judul Buku" << " | " << setw(12) << right << "Harga" << " | " << setw(9) << "Stok" << " |" << endl;
		cout << "+------+--------------------------------+--------------+-----------+" << endl;
		for(int a=0;a<jmlAwal;a++){
		cout << "|" << setw(5) << a+1 << " | " << setw(30) << left << lb[a].judul << " | " << setw(12) << right << lb[a].harga << " | " << setw(9) << lb[a].stok << " |" << endl;
		}
		cout << "+------+--------------------------------+--------------+-----------+" << endl;
			
	}
}
void penjualanBuku(){
	showDaftarBuku();
	int nmrBuku,jmlBuku;
	if(jmlAwal > 0){
		do{
			cout << "\nPilih nomor buku yang ingin dibeli: ";
			cin >> nmrBuku;
			cekFailInput();
			if(jmlAwal < nmrBuku || nmrBuku < 1) cout << "Nomor tidak ada dalam list" << endl;
		}while(jmlAwal < nmrBuku || nmrBuku < 1);
		
		cout << "Masukkan jumlah buku yang dibeli  : ";
		cin >> jmlBuku;
		cekFailInput();
		
		int id = nmrBuku-1;
		if(lb[id].stok < jmlBuku){
			cout << "Stok tidak mencukupi! Stok tersisa: " << lb[id].stok << endl;
		}else{
			int harga = lb[id].harga * jmlBuku;
			lb[id].stok = lb[id].stok-jmlBuku;
			cout << "\nTransaksi berhasil." << endl;
			cout << "Total harga : " << harga << endl;
			ttlPendapatan += harga;
		}
	}
}

void totalPendapatan(){
	cout << "+----------------------------------------+" << endl;
	cout << "|            TOTAL PENDAPATAN            |" << endl;
	cout << "+----------------------------------------+" << endl;
	cout << "Total pendapatan hari ini: " << ttlPendapatan << endl;
}
