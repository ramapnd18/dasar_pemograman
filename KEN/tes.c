#include <stdio.h>

void printPola(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n+4; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
              printf("* "); 
        }
        
        printf("\n");
    }
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
              printf("* "); 
        }
        for (j = n; j > i; j--) {
              printf("  "); 
        }
        for (j = 1; j <= i; j++) {
              printf("* "); 
        }
        
        printf("\n");
    }
       //  for (j = 1; j <= i/2; j++) {
       //        printf("* "); 
       //  }
       //  for (j = 1; j <= i/2; j++) {
       //        printf("* "); 
       //  }
       //  for (j = 1; j <= i/2; j++) {
       //        printf("* "); 
       //  }
}

int main() {
    int n = 4;
    printPola(n);
    return 0;
}

