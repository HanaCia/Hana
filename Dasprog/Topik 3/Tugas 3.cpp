#include <stdio.h>
#include <stdlib.h>


int main (){
	char nama [40];
	char barang [10];
	char dd[2];
	char mm[2];
	char yyyy[4];
	int a, b, c;
	float R;
	
	printf("         ===========================\n");
	printf("         Ready Praktikum Topik 3 !!!\n");
	printf("         ===========================\n");

	printf("%-65s:","Masukkan Nama Lengkap");
	gets (nama);
	printf("%-65s:","Masukkan Nama barang");
	gets (barang);
	printf("%-65s:","Masukkan tanggal Hari ini (dd-mm-yyyy)");
	scanf ("%s-%s-%s", dd, mm, yyyy);
	printf("%-65s:","Masukkan angka ribuan (R)");
	scanf("%f", &R);
	printf("%-65s:","Masukkan 3 angka yang dipisahkan dengan tanda Underscore (a_b_c)");
	scanf("%i_%i_%i", &a, &b, &c);
	
	system ("cls");
	
	printf("Hello User %s!!!\n", nama);
	printf("Date of Today: %s\n\n", dd, mm, yyyy);
	printf("Hasil penjumlahan ABC   = %i\n", a + b + c);
	printf("Hasil R dikali (a+b+c)%% = %.2f\n\n", (R * (a + b + c))/100);
	
	float q= (float) a/b;
	float r= (float) b/c;
	float s= (float) a/c;
	
	printf("Hasil Perkalian ABC     = %i\n", a * b * c);
	printf("Hasil A dibagi B, B dibagi C, dan A dibagi C   = %.2f, %.2f, %.2f\n", q, r, s);
	printf("Hasil A mod B, B mod C, A mod C                = %i, %i, %i", a % b, b % c, a % c);
}