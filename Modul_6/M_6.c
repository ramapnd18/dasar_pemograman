#include<stdio.h>
 
// int FPB(int a, int b){
//     while (a != b){
//         if (a > b){
//             return FPB(a - b, b);
//         }
//         else{
//             return FPB(a, b - a);
//         }
//     }
//     return a;
// }

    float Luas(float r){
        float L = r * 3.14 * r;
        return L;
    }

    float Keliling(float r){
        float K = 2 * 3.14 * r;
        return K;
    }

    float Diameter(float r){
        float d = 2 * r;
        return d;
    }

 
int main(){
    // int a, b, result;
 
    // printf("Masukkan 2 bilangan untuk dicari FPB: ");
    // scanf("%d%d", &a, &b);
    // result = FPB(a, b);
    // printf("FPB dari %d dan %d adalah %d.\n", a, b, result);

    float r, L, K, d;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    L = Luas(r);
    K = Keliling(r);
    d = Diameter(r);
    printf("Luas lingkaran: %.2f\n", L);
    printf("Keliling lingkaran: %.2f\n", K);
    printf("Diameter lingkaran: %.2f\n", d);

}