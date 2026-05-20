#include <stdio.h>
#include <string.h>

//Basic
void basic(){

int input[5];
int sum;
	printf("Masukkan 5 angka:\n");
	
	for(int i = 0; i < 5; i++){
		printf("Masukkan angka ke-%d: ", i+1);
		scanf("%d", &input[i]);
	}
	
	printf("Angka yang dimasukkan adalah:");
	for(int i = 0; i < 5; i++){
		printf("%d ", input[i]);
	}
	
	for(int i = 0; i<5; i++){
		sum += input[i];
	}
	
	printf("\nSum dari array tersebut: %d", sum);
}

void Standard(){
	int mA[2][2];
	int mB[2][2];
	int mC[2][2];
	
	printf("Penjumlahan matriks 2x2\n");
	printf("Masukkan 4 angka untuk matriks A\n");
	scanf("%d %d %d %d", &mA [0][0], &mA[0][1], &mA[1][0], &mA[1][1]);
	printf("Masukkan 4 angka untuk matriks B\n");
	scanf("%d %d %d %d", &mB[0][0], &mB[0][1], &mB[1][0], &mB[1][1]);
	printf("Hasil:\n");
	mC[0][0] = mA[0][0] + mB [0][0]; 
	mC[0][1] = mA[0][1] + mB [0][1];
	mC[1][0] = mA[1][0] + mB [1][0];
	mC[1][1] = mA[1][1] + mB [1][1];
	printf("%d %d\n", mC[0][0], mC[0][1]);
	printf("%d %d", mC[1][0], mC[1][1]);
}

void advance(){
	char nama[5];
	int NIM[5];
}
int main(){
	//basic();
	//Standard();
	advance();
	
}