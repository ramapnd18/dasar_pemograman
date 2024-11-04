#include<stdio.h>
#include<math.h>

int faktor2(int a, int b, int c){
    int D = b * b - 4 * a * c;
    printf("D = %d\n", D);
    if (D < 0) {   
        printf("Fungsi kuadrat ini memiliki akar imaginer\n");
        return 0;
    }
    int x1 = (-b + sqrt(D))/(2*a);
    int x2 = (-b - sqrt(D))/(2*a);
    printf("x1 = %d, x2 = %d\n", x1, x2);
}
int main()
{
    int a, b, c, D, x1, x2;
 
    printf("Mencari faktor dari Fungsi kuadrat\n");
    printf("Masukkan a, b, dan c dalam fungsi kuadrat: ");
    scanf("%d%d%d", &a, &b, &c);
    
    faktor2(a, b, c);
 
    return 0;
}