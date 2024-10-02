#include <stdio.h>
#include <String.h>
int main()
{
	printf("=======================");
	printf("\nNama: Rama Tri Ramdhani");
	printf("\nNPM: 247006111057");
	printf("\nKelas: A/B");
	printf("\n=======================\n");
	
	char nim[15];
	char fullName[30];
	char kelas;
	
	printf("Masukan NIM\t: ");
	scanf("%s", nim);
	getchar();

	printf("Masukan Nama\t: ");
	fgets(fullName, sizeof(fullName), stdin);
	
	
	printf("Masukan kelas : ");
	scanf("%c", &kelas);
	getchar();
	
	printf("\nNama: %s",fullName);
	printf("NPM: %s",nim);
	printf("\nKelas: %c",kelas);
	
    return 0;

}

