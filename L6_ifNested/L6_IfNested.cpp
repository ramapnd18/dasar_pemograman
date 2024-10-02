#include <iostream>

using namespace std;
int main() {
	
	int pin, transaksi, tunai;
	tunai =0;
	cout<<"Masukkan pin : ";
	cin>>pin;
	
	if(pin==90807){
		cout<<"\n 1. Cek Saldo";
		cout<<"\n 2. Tarik Tunai";
		cout<<"\nPilih Transaksi : ";
		cin>>transaksi;
		
		if(transaksi==1){
			cout<<"\n cek saldo";
		}else if(transaksi==2){
			cout<<"\n tarik tunai : ";
			cin>>tunai;
			if(tunai>0){
				
				cout<<"anda menarrik uang "<<tunai;
			}
		}else{
			cout<<"\n tidak ada transaksi";
		}
	}else{
		cout<<"\n PIN salah";
	}	
	return 0;
}
