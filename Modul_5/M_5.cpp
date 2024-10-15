#include <stdio.h>
#include <string.h>

struct Mahasiswa
{
    char nama[20];
    char kelas;
    int umur;/* data */
};

// typedef struct 
// {
//     char jalan[20];
//     char kecamatan[20];
//     int kodepos;
// }Alamat;

// typedef struct 
// {
//     char nama[30];
//     char kelamin[20];
//     int umur;
//     // Alamat alamat; // nested struct
// } Mahasiswa;

int main(){
    // struct Mahasiswa mahasiswa1;
   
    // struct Mahasiswa mahasiswa1={.nama ="Rama Tri Ramdhani", .kelas ='A',.umur = 20};
    
    // Mahasiswa mahasiswa[3]={
    //     {
    //         "Rama Tri Ramdhani",
    //         "Laki-Laki",
    //         20,
    //     },
    //     {
    //         "Zheka Baila",
    //         "Laki-Laki",
    //         10,
    //     },
    //     {
    //         "Rama Tri Ramdhani",
    //         "Laki-Laki",
    //         20,
    //     }
        
    // };


    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Mahasiswa ke-%d\n",i+1);
    //     printf("masukan nama\t: ");
    //     fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
    //     mahasiswa[i].nama[strlen(mahasiswa[i].nama)-1]='\0';

    //     printf("masukan kelamin\t: ");
    //     fgets(mahasiswa[i].kelamin, sizeof(mahasiswa[i].kelamin), stdin);
    //     mahasiswa[i].kelamin[strlen(mahasiswa[i].kelamin)-1]='\0';
        
    //     printf("masukan umur\t: ");
    //     scanf("%d",&mahasiswa[i].umur);
    //     getchar();
    //     // printf("Jalan\t: %s\n",mahasiswa[i].alamat.jalan);
    //     // printf("Kecamatan\t: %s\n",mahasiswa[i].alamat.kecamatan);
    //     // printf("Kode Pos\t: %d\n",mahasiswa[i].alamat.kodepos);
    
    // }


    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Nama\t: %s\n",mahasiswa[i].nama);
    //     printf("Kelas\t: %s\n",mahasiswa[i].kelamin);
    //     printf("Umur\t: %d\n",mahasiswa[i].umur);

    //     // printf("Jalan\t: %s\n",mahasiswa[i].alamat.jalan);
    //     // printf("Kecamatan\t: %s\n",mahasiswa[i].alamat.kecamatan);
    //     // printf("Kode Pos\t: %d\n",mahasiswa[i].alamat.kodepos);
    //     /* code */printf("\n");
    // }
    
    // Mahasiswa mahasiswa1;
    
    // strcpy(mahasiswa1.nama, "Rama Tri");
    // strcpy(mahasiswa1.alamat.kota, "Bandung");
    // mahasiswa1.kelas = 'A';
    // mahasiswa1.alamat.kodepos = 46396;
    // mahasiswa1.umur = 20;


    // printf("Masukan Nama\t: ");
    // fgets(mahasiswa1.nama, sizeof(mahasiswa1.nama), stdin);
    // mahasiswa1.nama[strcspn(mahasiswa1.nama, "\n")] = '\0';

    // printf("Masukan Kelamin\t: ");
    // fgets(mahasiswa1.kelamin, sizeof(mahasiswa1.kelamin), stdin);
    // mahasiswa1.kelamin[strcspn(mahasiswa1.kelamin, "\n")] = '\0';


    // printf("Masukan Umur\t: ");
    // scanf("%d", &mahasiswa1.umur);
    // getchar();


    // printf("Masukan Alamat\t: ");
    // fgets(mahasiswa1.alamat.jalan, sizeof(mahasiswa1.alamat.jalan), stdin);
    // mahasiswa1.alamat.jalan[strcspn(mahasiswa1.alamat.jalan, "\n")] = '\0';
    // // mahasiswa1.alamat.jalan[strlen(mahasiswa1.alamat.jalan)-1] = '\0';

    // printf("Masukan Kecamatan\t: ");
    // fgets(mahasiswa1.alamat.kecamatan, sizeof(mahasiswa1.alamat.kecamatan), stdin);
    // mahasiswa1.alamat.kecamatan[strcspn(mahasiswa1.alamat.kecamatan, "\n")] = '\0';
   
    // printf("Masukan Kodepos\t: ");
    // scanf("%d", &mahasiswa1.alamat.kodepos);
    
    // printf("Nama\t: %s\n", mahasiswa1.nama);
    // printf("kelamin\t: %s\n", mahasiswa1.kelamin);
    // printf("Umur\t: %d\n", mahasiswa1.umur);
    // printf("Kecamatan\t: %s\n", mahasiswa1.alamat.kecamatan);
    // printf("Jalan\t: %s\n", mahasiswa1.alamat.jalan);
    // printf("Kodepos\t: %d\n", mahasiswa1.alamat.kodepos);


    return 0;
}