#include <stdio.h>
#include <string.h>
int main() {
	
	// char fakultas[]="Teknik";
	// char prodi1[]="Informatika";	
	// char prodi2[]="Electro";
	// char prodi3[]="Informatika";
	// char prodi4[20]="";

	// //membandingkan 2 buah array menggunakan strcmp()
	// printf("Membandingkan prodi1 dan prodi2 %d\n", strcmp(prodi1,prodi2));
	// printf("Membandingkan prodi1 dan prodi3 %d\n", strcmp(prodi1,prodi3));
	
	// //mengukur panjang karakter menggunakan strlen()
	// printf("Menghitung Panjang prodi1 %ld\n", strlen(prodi1));
	
	// //menggabungkan 2 buah string menggunakan strcat()
	// printf("fakultas + prodi1 = %s\n", strcat(fakultas,prodi1));
	
	// //mengcopy prodi1 ke prodi 4 menggunakan strcpy()
	
	// strcpy(prodi4,prodi2);
	// printf("Prodi 4 = %s\n",prodi4);
	
	// // nama[strlen(nama)-1]='\0';
	

	
	
	// char nama[20];
	// printf("Masukan Nama Lengkap :");
	// fgets(nama, sizeof(nama), stdin);
	// nama[strlen(nama)-1]='\0';
	
	// for(int i=0;i<strlen(nama);i++){
	// 	if(nama[i]=='A'||nama[i]=='I'||nama[i]=='U'||nama[i]=='E'||nama[i]=='O'||nama[i]=='a'||nama[i]=='i'||nama[i]=='u'||nama[i]=='e'||nama[i]=='o'){
	// 		printf("\nKarakter %c - Vokal",nama[i]);
	// 	}else if(nama[i]==' '){
	// 		printf("\nKarakter %c - Hanya spasi",nama[i]);
	// 	}else{
	// 		printf("\nKarakter %c - Konsonan",nama[i]);
	// 	}
	// }
	
	// panjang = sizeof(var)/sizeof(var[0])
	
	
	//// AARRRRRRRAAAAAYYYYy
	
	// char menuMakanan[][30] = {"Bakso", "Mie Ayam", "Kue" ,"Pisang", "Seblak"};
	
	// printf("%s\n",menuMakanan[1]);//memanggil array index ke n
	// int panjang= sizeof(menuMakanan)/sizeof(menuMakanan[0]); //hitung berapa panjang
	
	// printf("%d\n",panjang);
	
	// strcpy(menuMakanan[3], "Cimol Keju");//merubah index ke n 
	// printf("\n%s\n",menuMakanan[3]);
	
	// //memangil semua array
	// for(int i=0;i<panjang;i++){
	// 	printf("\n%s",menuMakanan[i]);
	// }
	

	// char namaMahasiswa[3][30];

	
	// for(int i=0;i<3;i++){
	// 	printf("Masukan nama ke - %d ",i+1);
	// 	fgets(namaMahasiswa[i], sizeof(namaMahasiswa[i]), stdin);
	// 	namaMahasiswa[i][strlen(namaMahasiswa[i])-1]='\0';
	// }
	
	// for(int i=0;i<3;i++){
	// 	printf("%s",namaMahasiswa[i]);
	// 	printf("\n");
	// }
	

	// int matrix[2][3];
	
	// int y= sizeof(matrix)/sizeof(matrix[0]);//2
	// int x= sizeof(matrix[0])/sizeof(matrix[0][0]);//3

	// for(int i = 0; i<y; i++){
	// 	for(int j = 0; j<x; j++){
	// 		printf("Masukan angka [%d][%d] : ",i,j);
	// 		scanf("%d", &matrix[i][j]);
	// 		getchar();
	// 	}
	// }
	

	// printf("[");
	// for(int i = 0;i<y;i++){
	// 	for(int j = 0;j<x;j++){
	// 		printf(" %d ",matrix[i][j]);
	// 	}
	// 	if(i<y-1){
	// 	printf(" \n");
	// 	printf(" ");
	// 	}
	// }
	// printf("]");
	


	// int array3D[2][3][4]={
	// 	{
	// 		{1,2,3,4},
	// 		{5,6,7,8},
	// 		{9,10,11,12}
	// 	},
	// 	{	
	// 		{1,2,3,4},
	// 		{5,6,7,8},
	// 		{9,10,11,12}
	// 	}
	// };
	
	// for(int i = 0; i<2; i++){
	// 	printf("Array ke -%d\n",i+1);
	// 	for(int j = 0; j<3; j++){
	// 		for(int k=0; k<4; k++){
				
	// 		printf(" %d ",array3D[i][j][k]);
	// 		}
	// 		printf(" \n");
	// 	}

	// printf(" \n\n");
	
	// }
	
	
//	int angka[]={135,165,1,16,511,654,654,169,4};
//	int panjang= sizeof(angka)/sizeof(angka[0]); //	
//	int tmp;
//	for(int i=0;i<panjang;i++){
//		if(angka[i]>angka[0]){
//			tmp = angka[i];	
//		}
//	}
//		printf("%d",angka[i]);
	
	// int angka[3][5]={
	// 	{999,865,232,934,222},
	// 	{434,364,782,996,552},
	// 	{333,22,555,888,777}
	// };
	// int terbesar = angka[0][0],barisTerbesar=0,kolomTerbesar=0;
	// int terkecil = angka[0][0],barisTerkecil=0,kolomTerkecil=0;
	
	// int y= sizeof(angka)/sizeof(angka[0]);
	// int x= sizeof(angka[0])/sizeof(angka[0][0]);
	
	// for(int i=1; i<y;i++){
	// 	for(int j=1; j<x;j++){
	// 		if(angka[i][j]<terkecil){
	// 			terkecil = angka[i][j];
	// 			barisTerkecil = i;
	// 			kolomTerkecil = j;
	// 		}
	// 		if(angka[i][j]>terbesar){
	// 			terkecil = angka[i][j];
	// 			barisTerbesar = i;
	// 			kolomTerbesar = j;
	// 		}
	// 	}
	// }
	// printf("\nBilangan terkecil %d, ditemukan di baris %d kolom %d",terkecil, barisTerkecil, kolomTerkecil);
	// printf("\nBilangan terbesar %d, ditemukan di baris %d kolom %d",terbesar, barisTerbesar, kolomTerbesar);
	
	
	//   int array[2][2][3][4] = { 
    //     { 
    //         {
    //             {1, 2, 3, 4}, 
    //             {5, 6, 7, 8}, 
    //             {9, 10, 11, 12}
    //         },
    //         {
    //             {13, 14, 15, 16}, 
    //             {17, 18, 19, 20}, 
    //             {21, 22, 23, 24}
    //         }
    //     },
    //     {
    //         {
    //             {25, 26, 27, 28}, 
    //             {29, 30, 31, 32}, 
    //             {33, 34, 35, 36}
    //         },
    //         {
    //             {37, 38, 39, 40}, 
    //             {41, 42, 43, 44}, 
    //             {45, 46, 47, 48}
    //         }
    //     }
    // };
    
    
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         for(int k=0;k<3;k++){
    //             for(int l=0;l<4;l++){
    //                 printf("array [%d][%d][%d][%d] - %d\n",i,j,k,l,array[i][j][k][l]);
    //             }   
 	// 		}
    //     }
    // }



  #include <stdio.h>

    int angka[2][3];
    
    for(int i=0; i<2; i++){
        
        for(int j=0; j<3; j++){
            
           printf("Masukan angka [%d][%d] :", i,j);
           scanf("\n%d", &angka[i][j]);
           getchar ();
        }
    }
        
    printf("[");
   for(int i=0; i<2; i++){
       
        for(int j=0; j<3; j++){
            
           printf("%d ", angka[i][j]);
        }
		if(i==1){
        	printf("]");
		}
        printf("\n");
    }
    
    
    



    
	
	return 0;
}
