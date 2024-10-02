#include <iostream>

using namespace std;
int main() {
	
	char status;
	cout<<"Masukkan status :";
	cin>>status;
	
	if(status=='Y'||status=='y'){
		cout<<"Anda Mahasiswa";
	}else if(status=='T'||status=='t'){
		cout<<"Anda Bukan Mahasiswa";
	}else{
		cout<<"No Status";
	}
	return 0;
}
