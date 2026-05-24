#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char nama[50];
int nim, absen;
float tugas, kuis, responsi, praktikum;

int main(){
	printf("====PROGRAM PENILAIAN AKHIR PRAKTIKUM====\n\n");
	printf("Masukkan Nama Mahasiswa        : ");
	scanf(" %[^\n]", nama);
	printf("Masukkan NIM                   : ");
	scanf("%i", &nim);
	printf("Masukkan Nilai Tugas           : ");
	scanf("%f", &tugas);
	printf("Masukkan Nilai Kuis            : ");
	scanf("%f", &kuis);
	printf("Masukkan Nilai Responsi        : ");
	scanf("%f", &responsi);
	printf("Masukkan Nilai Praktikum Akhir : ");
	scanf("%f", &praktikum);
	printf("Masukkan Persentase Kehadiran  : ");
	scanf("%i", &absen);
	
	getch();
	system("cls");
	
	float tugas1= (tugas * 20)/100;
	float kuis1= (kuis * 20)/100;
	float responsi1= (responsi * 25)/100;
	float praktikum1= (praktikum * 35)/100;
	float akhir= tugas1 + kuis1 + responsi1 + praktikum1;
	
	char grade;
	char kelulusan [50];
	char ket[50];
	
	if (absen < 75) {
        strcpy(kelulusan, "TIDAK LULUS");
        grade = 'E'; 
        strcpy(ket, "Tidak lulus karena kehadiran kurang");
    } else {
        strcpy(kelulusan, "LULUS");
	
	
	if(akhir >= 85 && akhir <= 100){
		grade = 'A';
		strcpy(ket, "Sangat Baik");
	} else if (akhir >= 75 && akhir <= 84.99){
		grade = 'B';
		strcpy(ket, "Baik");
	} else if (akhir >= 65 && akhir <= 74.99){
		grade = 'C';
		strcpy(ket, "Cukup");
	}else if (akhir >= 50 && akhir <= 64.99){
		grade = 'D';
		strcpy(ket, "Perlu Perbaikan");
	} else {
		grade = 'E';
		strcpy(ket, "Perlu Perbaikan");
		strcpy(kelulusan, "Tidak lulus karena ada nilai komponen di bawah 50");
	}
	}
	
	printf("==== HASIL PENILAIAN ====\n");
	printf("Nama Mahasiswa : %s\n", nama);
	printf("NIM            : %i\n", nim);
	printf("Nilai Akhir    : %.2f\n", akhir);
	printf("Grade          : %c\n", grade);
	printf("Status         : %s\n", kelulusan);
	printf("Keterangan     : %s\n", ket);
	
}