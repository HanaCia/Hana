#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX 10

typedef struct {
	char nama[50];
	float mtk;
	float fisika;
	float rata2;
} Mahasiswa;

int main(){
	Mahasiswa data[MAX];
	int jumlah;
	float total_mtk= 0, total_fisika=0;
	
	printf("Masukkan jumlah mahasiswa:");
	scanf("%d", &jumlah);
	
	printf("\nMasukkan nama dan nilai mahasiswa");
	
	for (int i = 0; i < jumlah; i++){
		printf("\nMahasiswa ke-%i\n", i+1);
		printf("Nama              :");
		scanf(" %[^\n]", data[i].nama);
		printf("Nilai Matematika  :");
		scanf(" %f", &data[i].mtk);
		printf("Nilai Fisika      :");
		scanf(" %f", &data[i].fisika);
		
		data[i].rata2= (data[i].mtk+data[i].fisika)/2;
		total_mtk+= data[i].mtk;
		total_fisika+= data[i].fisika;
	};
	
		float rata_tot= (total_mtk + total_fisika)/(jumlah *2);
		
		printf("\n=======================\n");
		printf("| Data Nilai Mahasiswa |\n");
		printf("=======================\n");
		
		for(int i=0; i < jumlah; i++){
			printf("%d. %s | Mat: %.2f | Fis: %.2f | Rata-rata: %.2f\n", i+1, data[i].nama, data[i].mtk, data[i].fisika, data[i].rata2);
		}
		printf("\n\nRata-rata seluruh mahasiswa: %.2f", rata_tot);
		getch();
		system ("cls");
		
		int atas=0, bawah=0;
			printf("Mahasiswa dengan rata-rata nilai di atas rata-rata total:\n");
    		for(int i= 0; i< jumlah; i++){
    		if(data[i].rata2>= rata_tot){
            printf("= %s | Rata-rata: %.2f\n", data[i].nama, data[i].rata2);
            atas++;
        	}
    	}
    		printf("Total mahasiswa di atas rata-rata: %d\n\n", atas);

   			printf("Mahasiswa dengan rata-rata nilai di bawah rata-rata total:\n");
    		for(int i= 0; i< jumlah; i++){
        	if (data[i].rata2< rata_tot){
            printf("= %s | Rata-rata: %.2f\n", data[i].nama, data[i].rata2);
            bawah++;
        	}
    	}
    		printf("Total mahasiswa di bawah rata-rata: %d\n\n", bawah);  
			
		float max= data[0].rata2;
    	float min= data[0].rata2;
    
    	for(int i= 0; i< jumlah; i++){
    		if(data[i].rata2> data[0].rata2){
    		max= data[i].rata2;
			}
			else if(data[i].rata2< data[0].rata2){
			min= data[i].rata2;
			}	
		}
		getch();
		system("cls");  
		
		for (int i = 0; i < jumlah - 1; i++) {
        	for (int j = i + 1; j < jumlah; j++) {
            	if (data[i].rata2 < data[j].rata2) {
                Mahasiswa temp_mhs = data[i];
                data[i] = data[j];
                data[j] = temp_mhs;
            	}
        	}
    	} 
		
	    printf("\n=======================\n");
		printf("| Peringkat Mahasiswa |\n");
		printf("=======================\n");    
		
		for(int i=0; i < jumlah; i++){
			printf("%d. %s | Mat: %.2f | Fis: %.2f | Rata-rata: %.2f\n", i+1, data[i].nama, data[i].mtk, data[i].fisika, data[i].rata2);
		}             
}  	