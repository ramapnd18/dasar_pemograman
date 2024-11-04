#include <stdio.h>

int main(){

    int a=10;


    switch (a)
    {
    case 1 ... 10:
    printf("Masukkan angka pertama : ");
        break;
    case 11 ... 20:
    printf("Masukkan angka kedua : ");
        break;
    default:
        break;
    }
}