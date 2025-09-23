#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int total, diskon, totalHarga;
    string member;

    string barang[5];
    int stok[5];
    
    cout << "\n==================== Selamat datang! ====================\n\n\n";

    cout << "---------------------------------------------------------" << endl;
    cout << "Program Hitung Total Belanja Toko Bu Susi" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "\nMasukkan total belanja pelanggan : Rp. ";
    cin >> total;

    cout << "\nApakah pelanggan adalah member? (y/n) : ";
    cin >> member;

    if (member != "" && member != "y" && member != "n"){
        back:
        cout << "Mohon masukkan (y/n) : ";
        cin >> member;
        if (member != "y" && member != "n"){
            goto back;
        }
    }
    
    if (total >= 100000 && total < 200000){
        diskon = 5;
    }else if(total >= 200000 && total < 300000){
        diskon = 10;
    }else if(total >= 300000 && total < 400000){
        diskon = 15;
    }else if(total >= 400000){
        diskon = 20;
    }else{
        diskon = 0;
    }
    
	cout << endl;
    cout << setw(23) << left << "Total Belanja" << setw(2) << left << ":" << "Rp. " << total << endl;
    cout << setw(23) << left << "Diskon" << setw(2) << left << ":" << diskon << "%" << endl;

    if (member == "y"){
        cout << setw(23) << "Diskon Member" << setw(2) << left << ":" << "5%" << endl;
    }
    
    diskon += (member == "y" ? 5 : 0);

    totalHarga = total - (total * diskon / 100);
    
    cout << setw(23) << "Total setelah Diskon" << setw(2) << left << ":" << "Rp. " << totalHarga << endl;
    
    cout << "\n\n========= Terima kasih sudah berbelanja di sini! =========";
    
}
