#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

	char nama[40];
	int dd, mm, yyyy;
	int ds = 14, ms = 05, ys = 2026;
	int d, m, y;
	char pilihan;
	int k1, k2, k3;
			
	int main(){
	
	printf("Masukan Nama Anda :");
	scanf("%s", nama);
	printf("Masukan Tanggal Lahir (DD/MM/YYYY) :");
	scanf("%i/%i/%i", &dd, &mm, &yyyy);
	
	system ("cls");
	
	int y= ys - yyyy;
	
	if(ms >= mm){
		m = ms - mm;
	} else{
		y--;
		m = 12 + ms - mm;
	}
	
	if (ds >= dd){
		d= ds-dd;
	} else {
		m--;
		d= 30 + ds - dd;
	}
	
	if(y<=15){
		printf("Maaf %s, umur anda %i tahun, %i bulan, %i hari. \n", nama, y, m, d);
	} 
	
	else if (y>15){
		printf("Hi, %s Selamat Datang!\n", nama );
		printf("----------------------\n");
		printf("Silahkan pilih Menu:\n");
		printf("1: Kalkulator Tahun Kabisat\n");
		printf("2: Jumlah Bilangan\n");
		printf("3: Identifikasi Segitiga\n");
		printf("4: Tarif jalan Tol\n");
		printf("e: Exit");
		
		pilihan = getch();
		}
		
		system("cls");
		
		int tahun;
	
		if(pilihan == '1'){
			printf("Kalkuator Tahun Kabisat\n");
			printf("Masukan Tahun:");
			scanf("%d", &tahun);
			
			int a= tahun % 400;
			int b= tahun % 4;
			int c= tahun % 100;
		
			if(a==0 || (b == 0 && c != 0)){
			printf ("%d adalah tahun kabisat", tahun);
			} else {
			printf("%d bukanlah tahun kabisat", tahun);
			}
		} else if (pilihan == 'e') {
			printf("Have a nice day, %s!", nama);
		} else if (pilihan == '2'){
			
			int positif;
			printf("Silahkan masukkan sebuah bilangan bulat positif :");
			scanf("%i", &positif);
			
			if(positif < 0){
				printf("Masukan Bilangan Positif!");
			} else {
				printf("Jumlah semua bilangan dari 1 hingga %i adalah %i", positif, (positif*(positif+1))/2);
			}
			
		} else if (pilihan == '3'){
			
			printf("          /\\         \n");
			printf("         /  \\        \n");
			printf("        /    \\       \n");
			printf("       /      \\      \n");
			printf("      /  Tebak \\     \n");
			printf("     / Segitiga \\    \n");
			printf("    /    atau    \\   \n");
			printf("   /     Bukan    \\  \n");
			printf("  /                \\ \n");
			printf("  ------------------ \n");
			printf("IDENTIFIKASI SEGITIGA\n");
			printf("=====================\n");
			printf("Masukan 3 panjang sisi segitiga\n");
			printf("(pisahkan dengan koma):");
			scanf("%i, %i, %i", &k1, &k2, &k3);
			
			int ks1 = k1 * k1;
			int ks2 = k2 * k2;
			int ks3 = k3 * k3;
			
			if(k1 == k2 && k2 == k3){
				printf("Jenis Segitiga: Sama Sisi");
			} else if (k1==k2|| k1==k3 || k2==k3){
				printf("Jenis Segitiga: Sama Kaki");
			} else if (ks1 + ks2 == ks3 || ks1 + ks3 == ks2 || ks2 + ks3 == ks1){
				printf("Jenis Segitiga: Siku-siku");
			} else {
				printf("Tiga sisi tersebut tidak memenuhi syarat segitiga yang valid");
			}
			
		}
		
		
		}
		
			
		


	