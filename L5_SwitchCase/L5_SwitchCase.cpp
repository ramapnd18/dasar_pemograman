#include <iostream>

using namespace std;
int main() {
	
	char status;
	cout<<"Masukkan status :";
	cin>>status;
	
	switch(status){
		case 'y' :
		case 'Y' :
			cout<<"Anda Mahasiswa";
			break;
		case 't' :
		case 'T' :
			cout<<"Anda Bukan Mahasiswa";
			break;
		default :
			cout<<"No status";
	}
//	if(status=='Y'){
//		cout<<"Anda Mahasiswa";
//	}else if(status=='T'){
//		cout<<"Anda Bukan Mahasiswa";
//	}else{
//		cout<<"No Status";
//	}
	return 0;
}
