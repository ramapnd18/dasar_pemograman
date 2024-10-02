#include <iostream>
#include <time.h>
#include <stdlib.h>

//KITA AKAN BELAJAR LOOPING/PERULANGAN
int main() {
	
//	for(int i=1;i<=10;i++){	
//		sum+=i;
//	}
//	printf("Jumlah dari 1 sampai 10 = %d\n",sum);
	
//	int sum=1,n;
//	printf("Menghitung Faktorial");
//	printf("\nMasukan angka\t: ");
//	scanf("%d",&n);
//	
//	for(int i=1;i<=n;i++){
//		
//		sum*=i;
//	}
//	printf("Faktorial dari %d = %d\n",n,sum);		
	
	
//	int n;
//	printf("Masukan angka yang akan dicek\t: ");
//	scanf("%d",&n);
//	
//	for(int i = 1; i<=n; i++){
//		if(i%2==0){
//			printf("%d bilangan genap\n",i);
//		}else{
//			printf("%d bilangan ganjil\n",i);
//		}
//	}
	
//	int n,kali,batasan;
//	printf("Tabel Perkalian");
//	printf("\nMasukan angka\t: ");
//	scanf("%d",&n);
//	
//	printf("Masukan batasan\t: ");
//	scanf("%d",&batasan);
//	
//	for(int i = 1; i<=batasan; i++){
//		kali=i*n;
//		printf("%d X %d = %d\n",n,i,kali);
//	}
	
//	int tinggi;
//	
//	printf("Masukan tinggi : ");
//	scanf("%d",&tinggi);
//	for(int i=tinggi; i>=1;i--){
//		for(int j=1; j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	
	
//	int angka;
//	printf("Silahkan Masukan angka : ");
//	scanf("%d",&angka);
//	
//	while(angka>=0){
//		printf("anda memasukan angka %d",angka);
//		printf("\nulangi lagi :");
//		scanf("%d",&angka);
//	}
//	
//	printf("\nanda memasukan bilangan negatif");
	
	
//	int percobaan=1;
//	int cpin;
//	
//	printf("Masukan pin\t:");
//	while(percobaan<=3){
//		scanf("%d",&cpin);
//		
//		if(cpin==1234){
//			printf("PIN anda benar");
//			return 0;
//		}else{
//			percobaan++;
//			printf("PIN salah, coba lagi!(percobaan ke %d)",percobaan-1);
//			if(percobaan<=3){
//				printf("\nMasukan lagi pin : ");
//			}
//		}
//	}
//	
//	printf("\nPIN anda terblokir setelah 3 kali");
	
//	int tinggi;
//	
//	printf("Masukan tinggi : ");
//	scanf("%d",&tinggi);
//	for(int x=1;x<=100;x++){
//        for(int i=tinggi; i>=1;i--){
//    		for(int j=tinggi; j>=i;j--){
//    			printf(" ");
//    		}
//    		for(int j=1; j<=i;j++){
//    			printf("*");
//    		}
//    		printf("\n");
//    	}
//    	for(int i=1; i<=tinggi;i++){
//    		for(int j=1; j<=i;j++){
//    			printf("*");
//    		}
//    		printf("\n");
//    	}
//	    
//	}


//	srand(time(NULL));
//	int target = rand()%100;
//	int tebakan;
//	
//	printf("===SELAMAT DATANG DI GACHA ANGKA===");
//	
//	do{
//		
//		printf("\nMasukan tebakan anda(1-100)\t:");
//		scanf("%d",&tebakan);
//		
//		if(tebakan<target){
//			printf("\ntebakan terlalu rendah");
//		}else if(tebakan>target){
//			printf("\ntebakan terlalu tinggi");
//		}else{
//			printf("\ntebakan benar\n SELAMAT");
//		}
//	}while(tebakan!=target);

	
//	int menu;
//	char pilihan;
//	printf("Selamat datang di restoran kami!");
//	do{
//	
//	printf("\nMenu Makanan :");
//	printf("\n1. Nasi Goreng");
//	printf("\n2. Mie Ayam");
//	printf("\nPilih Menu (1-2):");
//	scanf("%d",&menu);
//	getchar();
//	
//	if(menu==1){
//		printf("\nAnda memilih Nasi Goreng");
//	}else if(menu==2){
//		printf("\nAnda memilih Mie ayam"); 
//	}else{
//		printf("\nMenu tidak tersedia");
//	}
//	
//	printf("\nApakah anda ingin mengulang lagi(y/t):");
//	scanf("%c",&pilihan);
//	getchar();
//	
//	}while(pilihan=='y'||pilihan=='Y');
	
//	int nilai, jumlah, ulang=1;
//	float rata;
//	
//	printf("--Program hitung rata rata--\n");
//	
//	do{
//		printf("Masukan nilai ujian: ");
//		scanf("%d",&nilai);
//		ulang++;
//		
//		jumlah+=nilai;
//	}while(nilai!=0);
//	
//	rata=(float)jumlah/(float)ulang;
//	
//	if(ulang!=1){
//		printf("Nilai rata-rata : %.2f",rata);	
//	}else{
//		printf("Tidak ada nilai");
//	}
	
	return 0;
}
