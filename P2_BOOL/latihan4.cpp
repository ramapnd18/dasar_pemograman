/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <String.h>
int main()
{

	char npm[15];
	char fullName[30];
	char kelas;
	char tanggal[10];	

	printf("masukan nama lengkap : ");
	fgets(fullName, sizeof(fullName), stdin);
	
	printf("Masukan NPM : ");
	scanf("%s", npm);
	getchar();
	
	printf("Masukan kelas : ");
	scanf("%c", &kelas);
	getchar();
	
	printf("Masukan tanggal lahir (dd-mm-yyyy) : : ");
	scanf("%s", tanggal);
	getchar();
	
	printf("\n=====data mahasiswa=====");
	printf("\nNama: %s",fullName);
	printf("NPM: %s",npm);
	printf("\nKelas: %c",kelas);
	printf("\nTanggal lahir: %s",tanggal);
	
    return 0;

}

