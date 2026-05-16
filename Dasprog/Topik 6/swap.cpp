#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x, y;
	printf("Masukkan nilai x:");
	scanf("%d", &x);
	printf("Masukkan nilai y:");
	scanf("%d", &y);
	
	printf("Sebelum swap: x = %d dan y = %d\n", x, y);
	swap(&x, &y);
	printf("Setelah swap: x = %d dan y= %d", x, y);
}