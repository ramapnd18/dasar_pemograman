#include <iostream>
#include <string.h>

int main() {
	
	printf("=======================");
	printf("\nNama: Rama Tri Ramdhani");
	printf("\nNPM: 247006111057");
	printf("\nKelas: A/B");
	printf("\n=======================\n");

//	for(int i=130;i<200;i+=5){
//		printf("%d\n",i);
//	}

//	int n, jumlah=0;
//	float rata;
//	
//	printf("Masukan Angka\t:");
//	scanf("%d",&n);
//	
//	for(int i=1; i<=n;i++){
//			printf("Bilangan - %d\n",i);
//			
//			jumlah+=i;
//	}
//	rata=(float)jumlah/(float)n;
//	
//	printf("\nJumlah deret bilagan tersebut adalah %d",jumlah);
//	printf("\nRata-rata deret bilangan tersebut adalah %.2f",rata);

//	int i,pin=1111, cpin, menu, saldo=100000, tf,tarik;
//	char c,bank[20];
//	do{
//		c='t';
//		i=3;
//		
//		system("cls");
//		
//		printf("=======================");
//		printf("\nNama: Rama Tri Ramdhani");
//		printf("\nNPM: 247006111057");
//		printf("\nKelas: A/B");
//		printf("\n=======================\n");
//		
//		for(i=3;i>=1;i--){
//			printf("(sisa kesempatan %d)\nMasukkan pin\t: ",i);
//			scanf("%d",&cpin);
//			getchar();
//		
//			if(cpin==pin){
//				printf("\n===SELAMAT DATANG DI ATM MINI===");
//				printf("\n1. Cek saldo");
//				printf("\n2. Tarik tunai");
//				printf("\n3. Tranfer");
//				printf("\nPilih menu(1-3) : ");
//				scanf("%d",&menu);
//				getchar();
//				
//				switch(menu){
//					case 1:
//						printf("\nSaldo anda sekarang %d",saldo);
//						break;
//					case 2:
//						printf("\nJumlah yang ingin ditarik\t: ");
//						scanf("%d",&tarik);
//						getchar();
//						printf("Berhasil menarik uang\t: %d",tarik);
//						break;
//					case 3:	
//						printf("\nJumlah yang ingin ditransfer\t: ");
//						scanf("%d",&tf);
//						getchar();
//						printf("NO rekening penerima\t: ");
//						scanf("%s",bank);
//						getchar();
//						printf("Berhasil mentranfer uang sejumlah %d ke %s",tf,bank);
//						break;
//					default:
//						printf("\nMenu tidak tersedia");
//						break;
//				}
//				
//				printf("\n\nApakah ingin melakukan transaksi lagi?(Y/T) ");
//				scanf("%c",&c);
//				getchar();
//				
//				if(c=='T'||c=='t'){
//					return 0;	
//				}
//				
//				i=0;
//			}else{
//				if(i<=1){
//					printf("PIN TELAH DIBLOKIR");
//				}else{
//					printf("Pin salah coba lagi");	
//				}
//			}
//		}
//		
//	}while(c=='Y'||c=='y');
		
	int m,n,FPB;
	printf("Masukan bilangan pertama : ");
	scanf("%d", &m); //m=4
	getchar();
	printf("Masukan bilangan kedua : ");
	scanf("%d", &n); //n=8
	FPB=m%n; //sisa bagi 4%8 = 4
	while(FPB!=0) //4 tidak sama dengan 0
	{
	m=n; //m=8
	n=FPB; //n=4
	FPB=m%n; // 8/4 sisa baginya 0
	}
	printf("pembagi persekutuan : %d \n ", n);













//	
	return 0;


}
