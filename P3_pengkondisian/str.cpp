#include <iostream>
#include <string.h>

int main() {

//	printf("%d", strcmp("aunl","Unsil"));

//	int pin;
//	printf("Masukan pin anda\t:");
//	scanf("%d",&pin);
//	if(pin==90807){
//		printf("pin anda benar admin");
//	} else if(pin==111){
//		printf("pin anda benar user");
//	}else{
//        printf("prin salah");  
//  	}
	
//	char prodi[20];
//	printf("Masukan prodi anda\t:");
//	scanf("%s", prodi);
//	if(strcmp("informatika",prodi)==0){
//		printf("prodi anda INFORMATIKA");
//	}

//	int tahun;
//	printf("Masukan tahun\t:");
//	scanf("%d", &tahun);
//	
//	if(tahun%4==0&&(tahun%100!=0||tahun%400==0)){
//		printf("%d tahun kabisat",tahun);
//	}else{
//		printf("%d bukan tahun kabisat",tahun);
//	}
	
//	int umur;
//	
//	printf("Masukan umur\t:");
//	scanf("%d", &umur);
//	
//	if(umur<5){
//		printf("tiket gratis");
//	} else if(umur>=5&&umur<=12){
//		printf("Tiket Anak anak, Rp 20000");
//	} else if(umur>=13&&umur<=59){
//		printf("Tiket dewasa, Rp 50000");
//	} else if(umur>=60){
//		printf("Tiket lansia, Rp 30000");
//	}else{
//        printf("umur tidak ada");  
//  	}
	
	
//	int hari;
//	printf("Masukan kode hari\t:");
//	scanf("%d", &hari);
//	switch(hari){
//		case 1:
//			printf("ahad"); 
//			break;
//		case 2: 
//			printf("senin");
//			break;
//		case 3: 
//			printf("selasa");
//			break;
//		case 4: 
//			printf("rabu");
//			break;
//		case 5: 
//			printf("kamis");
//			break;
//		case 6: 
//			printf("jumat");
//			break;
//		case 7: 
//			printf("sabtu");
//			break;
//		default:
//			printf("hari tidak tersedia");
//			break;
//	}
	
//	char niali;
//	printf("Masukan kode nilai A-E\t:");
//	scanf("%c", &nilai);
//	switch(hari){
//		case 'A':
//			printf("NILAI ANDA BAGUS SEKALI"); 
//			break;
//		case 'B': 
//			printf("NILAI ANDA BAGUS");
//			break;
//		case 'C': 
//			printf("NILAI ANDA CUKUP");
//			break;
//		case 'D': 
//			printf("NILAI ANDA KURANG");
//			break;
//		case 'E': 
//			printf("NILAI ANDA KURANG BANGET");
//			break;
//		default:
//			printf("KOSONG");
//			break;
//	}
	
	
//	int pilihan;
//	printf("PIluhan UKT");
//	printf("\n1. UKT tingkatan UKT 1");
//	printf("\n2. UKT tingkatan UKT 2");
//	printf("\n3. UKT tingkatan UKT 3");
//	printf("\n4. UKT tingkatan UKT 4");
//	printf("\n5. UKT tingkatan UKT 5");
//	printf("\nMasukan pilihan anda (1-5)\t:");
//	scanf("%d", &pilihan);
//	switch(pilihan){
//		case 1:
//			printf("Anda memilih UKT Tingkat 1, Biaya RP1.000.000"); 
//			break;
//		case 2: 
//			printf("Anda memilih UKT Tingkat 2, Biaya RP1.500.000"); 
//			break;
//		case 3: 
//			printf("Anda memilih UKT Tingkat 3, Biaya RP2.000.000"); 
//			break;
//		case 4: 
//			printf("Anda memilih UKT Tingkat 4, Biaya RP2.500.000"); 
//			break;
//		case 5: 
//			printf("Anda memilih UKT Tingkat 5, Biaya RP3.000.000"); 
//			break;
//		default:
//			printf("ukt tidak tersedia");
//			break;
//	}

	int menu,jumlah, harga=0, diskon=0;
	
	printf("====Seblak Hj. Thariq====");
	printf("Daftar menu:");	
	printf("1. Seblak Pedas - Rp20.000");
	printf("2. Seblak Tulang - Rp15.000");
	printf("3. Cilok Goang - Rp10.000");
	printf("4. Baso Aci - Rp30.000");
	printf("============================");
	printf("Pilih Menu (1-4)\t:");
	scanf("%d",&menu);
	printf("Masukkan jumlah\t:");
	scanf("%d",&jumlah);
	
	if(menu=='1'){
	}
	switch(menu){
		case 1:
			harga=jumlah*20000;
			break;
		case 2:
			harga=jumlah*15000;
			break;
		case 3:
			harga=jumlah*10000;
			break;
		case 4:
			harga=jumlah*20000;
			break;
		default:
			printf("tidak ada menu");
			break;
	}
	
	if(harga>=50000){
		diskon=120/100*harga;
	}else if
	
	
	
	return 0;
}
