#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// void sapa(char nama[], int umur){
//     printf("Hallo Semuanya\n");
//     printf("Perkenalkan Saya %s\n",nama);
//     printf("Saya Umur %d\n",umur);
// }

// int luasPersegi(int p, int l){
//     return l*p;
// }

// int num =21;
// int isEvent(){
//     return num%2==1;
// }

// struct Mahasiswa{
//     char nama[20];
//     int umur;
//     float IPK;
// };

// void tampilkanData(struct Mahasiswa m){
//     printf("Nama: %s\n", m.nama);

//     printf("Umur: %d\n", m.umur);
//     printf("IPK: %.2f\n\n", m.IPK);
// }

// void isiData(){
//     struct Mahasiswa m1[] = {
//          "ramaa",17 ,3.5,
//          "Adam",18,9.0
//          };
    
//     for(int i=0;i<sizeof(m1)/sizeof(m1[0]);i++){
//         tampilkanData(m1[i]);
//     }
// }

// struct Mahasiswa{
//     char nama[20];
// };

// void ubahNama(struct Mahasiswa *mhs){
//     strcpy(mhs->nama, "Amoon");
// }
struct kls{
    char kelas;
};

void ubahKelas(struct kls *k){
    k->kelas = 'B';
}

// int faktorial(int n){
//     if(n<0){
//         printf("Jangan negatif");
//         return -1;
//     }
//     if(n==0){
//         return 1;
//     }
//     return n * faktorial(n-1);
// }

// int ab(int a, int b){
//     if (b==0)
//     {
//         return a;
//     }
//     return ab(b, a%b);
// }
int main(){
    struct kls k1;
    k1.kelas = 'A';
    printf("%c",k1.kelas);
    ubahKelas(&k1,'B');
    printf("%c",k1.kelas);
//     int result=ab(56,16);
//     printf("%d",result);
    // sapa("Rama Tri Ramdhani", 18);

    // int hasil = luasPersegi(10,3);
    // printf("hasil %d\n",hasil);
    // printf("hasil %d\n",luasPersegi(9,6));

    // if(isEvent()){
    //     printf("%d ganjil",num);
    // }else{
    //     printf("%d genap",num);
    // }

    // isiData();

    // struct Mahasiswa mhs1={
    //     "Rama Tri Ramdhhani"
    // };
    // printf("Sebelum: %s\n",mhs1.nama);
    // ubahNama(&mhs1);
    // printf("Sesudah: %s\n",mhs1.nama);
    
    // int number =5;
    
    // printf("Sesudah: %d\n",faktorial(number));




    return 0;
}