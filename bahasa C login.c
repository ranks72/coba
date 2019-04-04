#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

//deklarasi
char username[50],nama[50],password[50];
char kondisi;
int i,j,jmlh_pesanan;
struct data{
	char makan[50];
	char minum[50];
}pesanan[100];

//deklarasi void
void daftar_menu();

//koding
main(){
	printf("Masukan Username : "); scanf("%s",&username);
	printf("Masukan Password : "); scanf("%s",&password);
	 if(strcmp(username,"admin") == 0 && strcmp(password,"123") == 0){
        printf("Akses diterima. Selamat Datang\n");
        system("cls");
        daftar_menu();        	    
    }
    else{
         printf("Username dan Password tidak match\n");
         system("pause");     
    }
    exit(1);
}

void daftar_menu(){
	printf("nama pelanggan : "); scanf("%s",&nama);
	do{
		i++;
		printf("silahkan pesan menu makanan :"); scanf("%s",&pesanan[i].makan);
		printf("silahkan pesan menu minuman :"); scanf("%s",&pesanan[i].minum);
		printf("apakah mau pesan menu lagi ???"); scanf("%s",&kondisi);
		jmlh_pesanan++;
	}while(kondisi == 'y' || kondisi == 'Y');
	
	printf("Nama pelanggan : %s\n",nama);
        printf("\npesanan :");
        for(j = 1; j <= jmlh_pesanan; j++){	
			printf("\n%s dan %s",pesanan[j].makan,pesanan[j].minum);
		}
}
