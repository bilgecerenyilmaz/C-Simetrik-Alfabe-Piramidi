/*isim:Bilge Ceren Yilmaz
No:10658469302
Soru 1
Vs 2022 ile yapildi*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c, d;
	char alphabet = 'A';
	int yukseklik;
	//1-3-5-7-9 diye tekli sayi olarak gidecek
	printf("Piramidin yuksekligini giriniz: ");
	scanf_s("%d", &yukseklik);
	for (a = 0; a < yukseklik; a++)
	{
		for (c = 0; c <= yukseklik - a; c++) {
			printf(" ");
		}
		for (b = 0; b <= a; b++) {
			printf("%c", alphabet++);
		}
		alphabet--;
		for (d = 0; d < a; d++) {
			printf("%c", --alphabet);
		}
		printf("\n");
		alphabet = 'A';
	}
	return 0;
}