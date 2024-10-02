#include <iostream>
#include <string.h>
int main() {
	
	printf("=======================");
	printf("\nNama: Rama Tri Ramdhani");
	printf("\nNPM: 247006111057");
	printf("\nKelas: A/B");
	printf("\n=======================\n");

//	int angka;
//
//	printf("Mengecek Bilangan positif, negatif, atau nol");
//	printf("\nMasukan Angka\t:");
//	scanf("%d",&angka);
//	
//	if(angka<0){
//		printf("%d Merupakan bilangan negatif",angka);
//	}else if(angka>0){
//		printf("%d Merupakan bilangan positif",angka);
//	}else{
//		printf("%d Merupakan NOL",angka);
//	}

//	long long int nim;
//	char user[30];
//	
//	printf("Masukan Username: ");
//	scanf("%s", user);
//	
//	printf("Masukan Password: ");
//	scanf("%lld", &nim);
//
//	printf("\n%s %lld\n",user ,nim);
//	
//	if(strcmp(user,"amoond")==0 && nim==247006111057){
//		printf("Login Berhasil");	
//	}else{
//		printf("Login gagal");
//	}


//	long long int nim;
//	char nama[30];
//	float uas,uts,praktek,absen,nilai;
//
//	printf("=== PENENTU NILAI AKHIR ===\n");
//	
//	printf("\nMasukkan NIM\t: ");
//	scanf("%lld", &nim);
//
//	printf("Masukan Nama\t: ");
//	scanf("%s", nama);
//	
//	printf("Masukan Nilai UTS\t: ");
//	scanf("%f", &uts);
//	
//	printf("Masukan Nilai UAS\t: ");
//	scanf("%f", &uas);
//	
//	printf("Masukan Nilai Praktek\t: ");
//	scanf("%f", &praktek);
//	
//	printf("Masukan Nilai Presensi\t: ");
//	scanf("%f", &absen);
//	
//	nilai=0.35*uts+0.3*uas+0.2*praktek+0.15*absen;
//	
//	printf("\nNilai Akhir angka yang didapatkan\t: %.2f",nilai);
//	
//	if(nilai>=85&&nilai<=100){
//		printf("\nNilai Akhir huruf yang didapatkan\t: A");
//	}else if(nilai>=70&&nilai<=84){
//		printf("\nNilai Akhir hurufyang didapatkan\t: B");
//	}else if(nilai>=60&&nilai<=69){
//		printf("\nNilai Akhir huruf yang didapatkan\t: C");
//	}else if(nilai>=45&&nilai<=59){
//		printf("\nNilai Akhir huruf yang diapatkan\t: D");
//	}else if(nilai<45){
//		printf("\nNilai Akhir huruf yang didapatkan\t: E");
//	}else{
//		printf("\nNilai Akhir tidak valid");
//	}
//	
//	printf("\n=============================================");

//	char kode;
//	int jumlah,total,diskon=0,bayar;
//	
//	printf("\n=== TOKO JAYA JAYA ===");
//	
//	printf("\nMasukkan Kode Barang(A/B)\t: ");
//	scanf("%c", &kode);
//	
//
//	printf("Masukkan Jumlah Barang\t: ");
//	scanf("%d", &jumlah);
//
//	printf("Harga Barang %c\t: 500",kode);
//	
//	
//	
//		if(kode=='A'){
//			total=jumlah*500;
//			printf("\nTotal Harga\t: %d",total);
//			
//			if(jumlah>10){
//				diskon=total*0.05;
//			}
//		}else if(kode=='B'){
//			total=jumlah*500;
//			printf("\nTotal Harga\t: %d",total);
//			
//			if(jumlah>10){
//			diskon=total*0.025;
//			}
//		}else{
//			printf("\nKode yang anda masukan tidak valid");
//		}
//	
//	printf("\nDiskon\t: %d",diskon);
//	printf("\n=========================");
//	bayar=total-diskon;
//	printf("\nTotal Bayar\t: %d",bayar);	
	
	int jumlah, harga, total, bayar,potongan;
	char kode[10], nama[20], satuan[10]; 
	
	printf("\n=========================");
	printf("\nSuper Market RamaMart");	
	printf("\n=========================");
	
	printf("\nKode Barang\t: ");
	scanf("%s", kode);
	
	printf("Nama Barang\t: ");
	scanf("%s", nama);	
	
	printf("=========================\n");
	
	printf("Satuan\t: ");
	scanf("%s", satuan);
	
	printf("Jumlah Beli\t: ");
	scanf("%d", &jumlah);
	
	printf("Harga Beli\t: ");
	scanf("%d", &harga);
	
	printf("=========================");
	
	total=jumlah*harga;
	printf("\nTotal Harga\t: %d",total);
	
	if(total>100000){
		potongan=0.1*total;
	}else{
		potongan=0;
	}
	printf("\nPotongan\t: %d",potongan);
	
	bayar=total-potongan;
	printf("\nTotal Bayar\t: %d",bayar);
	printf("\n=========================");
	printf("\n=========================");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	return 0;
}
