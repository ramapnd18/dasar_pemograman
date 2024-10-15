#include <stdio.h>
#include <string.h>

struct Pegawai
{
    char Nama[50];
    float gaji;
    int umur;
};

int main(){
    struct Pegawai pegawai1={
        "Rama Tri Ramdhani",2.5,30};
        printf("Nama : %s\n",pegawai1.Nama);
}