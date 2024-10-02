#include <iostream>

using namespace std;
int main() {
	
	int pin, transaksi, tunai;
	tunai =0;
	cout<<"masukan pin : ";
	cin>>pin;
	
	if(pin==1234){
		cout<<"\n 1. Cek saldo";
		cout<<"\n 2. Tarik tunai";
		cout<<"\n pilih transaksi :";
		cin>>transaksi;
		
		if(transaksi==1){
		cout<<"\n cek saldo";	
		}else if(transaksi==2){
			cout<<"\n tarik tunai : ";
			cin>>tunai;
			if(tunai>0){
				cout<<"anda menarik tunai" <<tunai;
				
			}
		}else{
			cout<<"\n tidak ada transaksi";
		}
	}else{
		cout<<"\n PIN SALAH";
		
	}
	return 0;
	
}
