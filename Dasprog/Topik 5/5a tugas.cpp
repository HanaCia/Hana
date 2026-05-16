#include <stdio.h>
#include <stdlib.h>

int pilihan;
int bilangan;
int hitung;
int prima;
int ketupat;

int main(){
	while(1){ //while(1) berfungsi sbg loop infinity
		system("cls");
		printf("********* MENU UTAMA *********\n");
		printf("*                            *\n");
		printf("*1. Mencari Faktor Bilangan  *\n");
		printf("*2. Mencari Bilangan Prima   *\n");
		printf("*3. Menggambar Belah Ketupat *\n");
		printf("*4. Exit                     *\n");
		printf("*                            *\n");
		printf("******************************\n\n");
		printf("Masukkan pilihan (1-4):");
		scanf("%d", &pilihan);
		
		switch(pilihan){
			case 1:
				system("cls");
				printf("******MENCARI FAKTOR PRIMA******\n");
				printf("Masukkan angka:");
				scanf("%d", &bilangan);
				printf("Faktor dari angka %d adalah:", bilangan);
					hitung = 0;
					for(int i = 1; i <= bilangan; i++){ // anggap dihitung mulai dari 1; selama i masih kurang dari bilangan yang dimasukkan; maka i akan bertambah terus hingga i==bilangan
						if(bilangan % i == 0){
							printf("| %d |", i);
							hitung++;
						}
					}
				printf("\nJumlah dari faktor tersebut adalah: %d\n", hitung);
				break;
			
			case 2:
				system("cls");
				printf("******MENCARI BILANGAN PRIMA******\n");
				printf("Masukkan angka:");
				scanf("%d", &bilangan);
				printf("Bilangan Prima dari 1 hingga %d adalah:", bilangan);
				hitung=0;
				for(int i=2; i<= bilangan; i++){
					prima = 1; // asumsikan bahwa bilangan adalah prima
					for(int j=2; j*j <= i; j++){ //buat pangkat dari suatu bilangan
						if(i % j == 0){ // jika pangkat tsb habis dibagi dengan i, maka bukan prima, lanjut hitung ke bilangan berikut
							prima = 0;
							break;
							}
						}
					if(prima){
						printf("| %d |", i);
						hitung++;
						}		
				}
				printf("\njumlah bilangan prima adalah: %d\n", hitung);
				break;
				
			case 3:
				system("cls");
				printf("******MENGGAMBAR BELAH KETUPAT*******\n");
				printf("masukkan ukuran belah ketupat:");
				scanf("%d", &ketupat);
				printf("Berikut adalah bentuk belah ketupat:\n");
				
				//baris atas//
				for(int i=1 ; i <= ketupat; i++){
					for(int j=i; j < ketupat; j++){ //loop untuk cetak spasi
						printf(" ");
						
					}
					for(int k =1 ; k <= (2 * i - 1); k++){ //masing" bintang pasti ganjil, makanya dikali 2 agar duplikat tiap ke bawah, lalu kurangi 1 agar ganjil
						printf("*");
					}
					printf("\n"); //pindah ke baris bawah tiap 1 baris
				}
				
				//baris bawah//
				for (int i = ketupat - 1; i >= 1; i--) { //kebalikan dari bagian atas
       				for (int j = 1; j <= ketupat - i; j++) {
          				printf(" ");
        			}
      				for (int k = 1; k <= (2 * i - 1); k++) {
            			printf("*");
        			}
        			printf("\n");
    			}
    			
    		case 4:
    			printf("\n\nTerima kasih. program telah berhenti.");
    			return 0;
					
		}
		printf("Silahkan tekan tombol apa saja untuk melanjutkan");
		getchar();
		getchar();// getchar double untuk menahan hingga pengguna menekan tombol
	} 
	return 0;
}