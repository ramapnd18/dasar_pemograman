#include <stdio.h>

int main() {
	
//	int array[5] = {1,6,8,2,7};
//	int panjang = sizeof(array)/sizeof(array[0]);
//	int terbesar=array[0];
//	int terkecil=array[0];
//	
//	for(int i=0; i<panjang; i++){
//		
//		if(array[i]<terkecil){
//			terkecil = array[i];
//		}
//		if(array[i]>terbesar){
//			terbesar = array[i];
//		}
//	}
//	printf("\nAngka Terkecil %d",terkecil);
//	printf("\nAngka Terbesar %d",terbesar);


//	int angka[5]={10,20,30,40,50};
//	angka[1]=25;	angka[3]=45;
//	
//	printf("{");
//	for(int i=0; i<5; i++){
//		printf(" %d ",angka[i]);
//	}
//	printf("}");

	
	
//	int kotak[3][3]={
//	{1,1,1},
//	{2,2,2},
//	{3,3,3}
//	};
//	int jumlah;
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			jumlah=jumlah+kotak[i][j];		
//		}
//	}
//	
//	printf("jumlah seluruhnya %d",jumlah);



	int matrix[2][3];
	
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			printf("Masukan angka [%d][%d] : ",i,j);
			scanf("%d", &matrix[i][j]);
			getchar();
		}
	}
	
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
	printf("Transpos\n");
	
	printf("[");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<2;j++){
			printf(" %d ",matrix[j][i]);
		}
		if(i<2){
		printf(" \n");
		printf(" ");
		}
	}
	printf("]");


	return 0;
}
