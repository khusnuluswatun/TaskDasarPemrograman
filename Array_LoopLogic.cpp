#include <iostream>
#include <iomanip>
using namespace std;
main(){
	cout << "\n\n==================== while logic ====================\n\n";
	int q,r,s,t;
	q = 1;
	while(q <= 5){
		r = 1;
		while(r <= q){
			cout << r * 10 << " ";
			r++;
		}
		q++;
		cout << endl;
	}
	s = 5;
	while(s >= 1){
		t = 1;
		while(t <= s){
			cout << t * 10 << " ";
			t++;
		}
		s--;
		cout << endl;
	}
	

	cout << "\n=================== do while logic =====================\n";
	int o, p;
	o = 1;
	do{
		p = 1;
		do{
			cout << p * 10 << " ";
			p++;
		}while(p <= o);
		cout << endl;
		o++;
	}while(o <= 5);
			
	o = 5;
	do{
		p = 1;
		do{
			cout << p * 10 << " ";
			p++;
		}while(p <= o);
		cout << endl;
		o--;
	}while(o >= 1);
	
	
	cout << "\n=================== array =====================\n";
	
	int arr[3][3];
	
	arr[0][0] = 2;
	arr[0][1] = 5;
	arr[1][0] = 4;
	arr[1][1] = 8;
	arr[2][0] = 6;
	arr[2][1] = 9;
	
	cout << "Isi variable arr: " << endl;
	cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][0]*arr[0][1] << endl;
	cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][0]*arr[1][1] << endl;
	cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][0]*arr[2][1] << endl;
	
	
	cout << "\n\n===============\n\n";
	int ar[3][3];
	
	ar[0][0] = 10;
	ar[0][1] = 5;
	ar[1][0] = 20;
	ar[1][1] = 10;
	ar[0][2] = ar[0][0]*ar[0][1];
	ar[1][2] = ar[1][0]*ar[1][1];
	ar[2][0] = ar[0][0] + ar[1][0];
	ar[2][1] = ar[0][1] + ar[1][1];
	ar[2][2] = ar[0][2] + ar[1][2];
	
	cout << "Isi variable arr: " << endl;
	cout << setw(5) << ar[0][0] << setw(5) << ar[0][1] << setw(5) << ar[0][2] << endl;
	cout << setw(5) << ar[1][0] << setw(5) << ar[1][1] << setw(5) << ar[1][2] << endl;
	cout << setw(5) << ar[2][0] << setw(5) << ar[2][1] << setw(5) << ar[2][2] << endl;
	
	cout << "\n\n===============\n\n";
	

	
}
