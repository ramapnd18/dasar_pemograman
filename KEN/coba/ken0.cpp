#include <stdio.h>

int main()
{
    printf("Nama : Kenanga Tri Ramadani");
    printf("\nNPM : 247006111007");
    printf("\n==============================");
    printf("\n~~Minimarket Ken\n");
    printf("===============================");
    
    char kode[20], nama[50], satuan[20];
    int jum_beli;
    float harga_beli, total_harga, potongan, total_bayar;

    printf("\nKode Barang: ");
    scanf("%s", kode);
    printf("Nama Barang: ");
    scanf("%s", nama);
    printf("====================\n");
    printf("Satuan : ");
    scanf("%s", satuan);
    printf("Jumlah beli :");
    scanf("%d", &jum_beli);
    printf("Masukkan Harga Beli: ");
    scanf("%f", &harga_beli);

    total_harga=jum_beli*harga_beli;

     if (total_harga > 100000) {
        potongan = total_harga * 0.1;
    } else {
        potongan = 0;
    }

    total_bayar = total_harga - potongan;

    printf("\n--- Rincian Transaksi ---\n");
    printf("Total Harga: %.2f\n", total_harga);
    printf("Potongan: %.2f\n", potongan);
    printf("Total Bayar: %.2f\n", total_bayar);

    return 0;
}
