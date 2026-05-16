#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//cari max value
int findmax(int a, int b){
	return (a > b) ? a : b;
}

//swap value
void swap(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

//segitiga
void triangle (int baris, char karakter){
	for(int i=1 ; i <= baris; i++){
		for(int j=0 ; j<i ; j++){
			printf("%c", karakter);
		} printf("\n");
	}
}

int main (){
	int opsi;
	
	while(1){
		system("cls");
		printf("--Menu--\n");
		printf("1. Find the Max Value\n");
		printf("2. Swap Values\n");
		printf("3. Triangle\n");
		printf("E. Exit\n");
		printf("Pilih opsi (1/2/3/E):");
		opsi = getchar();
		
		switch(opsi){
			case '1': {
				int nilai1, nilai2;
				printf("Masukkan nilai pertama:");
				scanf("%d", &nilai1);
				printf("Masukkan nilai kedua:");
				scanf("%d", &nilai2);
				
				int hasil = findmax (nilai1, nilai2);
				printf("Nilai terbesar adalah: %d", hasil);
				break;
			}
				
			case '2': {
				int x, y, z;
				printf("Masukkan nilai X:");
				scanf("%d",&x);
				printf("Masukkan nilai Y:");
				scanf("%d", &y);
				printf("Masukkan nilai Z:");
				scanf("%d", &z);
				printf("Sebelum Swap: X = %d, Y = %d, Z = %d\n", x, y, z);
				swap(&x, &y, &z);
				printf("Sesudah Swap: X = %d, Y = %d, Z = %d", x, y, z);
				break;
			}
			
			case '3': {
				int baris;
				char karakter;
				printf("Masukkan jumlah baris:");
				scanf("%d", &baris);
				printf("Masukkan Karakter:");
				scanf(" %c", &karakter); //ada spasi di depan %c agar program tidak ke skip
				
				printf("\nSegitiga siku-siku:\n");
				triangle(baris, karakter);
				break;
			}
			
			case 'e':
			case 'E': {
				return 0;
			}
		}
		getch ();
	}
	
}