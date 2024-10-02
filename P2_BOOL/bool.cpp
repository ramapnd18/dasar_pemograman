/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x =10, y=2;
    
    y*=x;// y= y*x = 20
    y++;//y= y+1 = 21
    x--;// x= x-1 = 9
    
    x%=((1||3)+2);//x= x%((1||1)+2) = 0
    y%= x+y;//y= y%(x+y) = 0
    y= !y;//y= !y =1
    // x= 0, y= 1
    printf("x = %d, y=%d", x, y);
    return 0;
}

