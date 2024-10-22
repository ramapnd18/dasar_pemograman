#include <stdio.h>
#include <string.h>

// struct Buku
// {
//     char judul[30];
//     char penulis[20];
//     int terbit;
// };

    typedef struct{
        int waktu;
        float gaji;
        char alamat[50];
    }Status;

    typedef struct{
        char nama[30];
        char jabatan[20];
        Status status;
    }Pegawai;
int main(){

    printf("=======================");
	printf("\nNama: Rama Tri Ramdhani");
	printf("\nNPM: 247006111057");
	printf("\nKelas: A/B");
	printf("\n=======================\n");
    
    // struct Buku buku1={"Dasar-dasar Pemrograman","Shinta Esabella",2021};

    // printf("Judul buku      : %s\n",buku1.judul);
    // printf("Penulis         : %s\n",buku1.penulis);
    // printf("Tahun Terbit    : %d\n",buku1.terbit);

    Pegawai pegawai[4];
    int panjang = sizeof(pegawai)/sizeof(pegawai[0]);

    for (int i = 0; i < panjang; i++)
    {
        printf("Pegawai ke-%d\n",i+1);
        printf("Masukan Nama\t: ");
        fgets(pegawai[i].nama, sizeof(pegawai[i].nama), stdin);
        pegawai[i].nama[strlen(pegawai[i].nama)-1]='\0';
        
        printf("Masukan Jabatan\t: ");
        fgets(pegawai[i].jabatan, sizeof(pegawai[i].jabatan), stdin);
        pegawai[i].jabatan[strlen(pegawai[i].jabatan)-1]='\0';

        printf("Masukan Waktu Bekerja\t: ");
        scanf("%d",&pegawai[i].status.waktu);
        getchar();
        
        printf("Masukan Gaji\t: ");
        scanf("%f",&pegawai[i].status.gaji);
        getchar();

        printf("Masukan Alamat\t: ");
        fgets(pegawai[i].status.alamat, sizeof(pegawai[i].status.alamat), stdin);
        pegawai[i].status.alamat[strlen(pegawai[i].status.alamat)-1]='\0';
        printf("\n");
    }

    for (int i = 0; i < panjang; i++)
    {
        printf("\nPegawai ke-%d",i+1);
        printf("\nNama\t: %s",pegawai[i].nama);
        printf("\nJabatan\t: %s",pegawai[i].jabatan);
        printf("\nWaktu Bekerja\t: %d tahun",pegawai[i].status.waktu);
        printf("\nGaji\t: %.2f",pegawai[i].status.gaji);
        printf("\nAlamat\t: %s",pegawai[i].status.alamat);
        printf("\n");
    }

    return 0;
}