#include <stdio.h>

int main() {
	
	printf("=======================");
	printf("\nNama: Rama Tri Ramdhani");
	printf("\nNPM: 247006111057");
	printf("\nKelas: A/B");
	printf("\n=======================\n");

	// int array[5] = {1,6,8,2,7};
	// int panjang = sizeof(array)/sizeof(array[0]);
	// int terbesar=array[0];
	// int terkecil=array[0];
	
	// printf("[");
	// for(int i=0; i<panjang; i++){
	// 	printf(" %d ",array[i]);
	// 	if(array[i]<terkecil){
	// 		terkecil = array[i];
	// 	}
	// 	if(array[i]>terbesar){
	// 		terbesar = array[i];
	// 	}
	// }
	// printf("]");
	// printf("\nAngka Terkecil %d",terkecil);
	// printf("\nAngka Terbesar %d",terbesar);


	// int angka[5]={10,20,30,40,50};
	
	// printf("Sebelum diganti\n");
	// printf("{");
	// for(int i=0; i<5; i++){
	// 	printf(" %d ",angka[i]);
	// }
	// printf("}");

	// angka[1]=25;	angka[3]=45;
	
	// printf("\n\nSesudah diganti\n");
	// printf("{");
	// for(int i=0; i<5; i++){
	// 	printf(" %d ",angka[i]);
	// }
	// printf("}");

	
	
	// int kotak[3][3]={
	// 	{1,1,1},
	// 	{2,2,2},
	// 	{3,3,3}
	// };
	// int jumlah;
	
	// printf("[\n");
	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		printf(" %d ",kotak[i][j]);
	// 		jumlah=jumlah+kotak[i][j];		
	// 	}
	// 	printf("\n");
	// }
	// printf("]\n");

	// printf("jumlah seluruhnya %d",jumlah);



	int matrix[2][3];
	
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			printf("Masukan angka [%d][%d] : ",i,j);
			scanf("%d", &matrix[i][j]);
			getchar();
		}
	}
	

	printf("\nMatriks Awal\n");
	printf("[");
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			printf(" %d ",matrix[i][j]);
		}
		if(i<1){
		printf(" \n");
		printf(" ");
		}
	}
	printf("]");
	
	printf("\n\n");
	printf("Hasil Transpos\n");
	
	printf("[");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<2;j++){
			printf(" %d ",matrix[j][i]);
			if (j<1){
			printf(", ");
			}
			
			 
		}
		if(i<2){
		printf(" \n");
		printf(" ");
		}
	}
	printf("]");


	return 0;
}
