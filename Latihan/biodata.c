#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main() {
	
	char nama[50];
	char ultah[20];
	char alamat[50];
	char cita[30];
	char npm[20];
	char hp[20];
	char telp[20];
	
	printf("\n");
	Sleep(1000);
	printf("============================================\n");
	printf("\t Isi Data Berikut !\n");
	printf("============================================\n");
	Sleep(0500);
	printf("\n");
	printf("Nama Lengkap	:");
	gets(nama);
	
	printf("NPM		: ");
	gets(npm);
	
	printf("Alamat Rumah	: ");
	gets(alamat);
	
	printf("Cita-Cita	: ");
	gets(cita);
	
	printf("Tanggal Lahir	: ");
	gets(ultah);
	
	printf("Telp Rumah	: ");
	gets(telp);
	
	printf("Nomor HP	: ");
	gets(hp);
	
	printf("\n");
	printf("============================================\n");
	printf("\n");
	printf("Loading");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".");
	Sleep(0500);
	printf(".\n");
	
	printf("============================================\n");
	
	
	system("cls");
	Sleep(2000);
	printf("============================================\n");
	printf("\n");
	printf("Data Biodata Anda \n");
	printf("\n");
	printf("============================================\n");
	
	printf("Nama Lengkap	: %s\n",nama);
	printf("NPM		: %s\n",npm);
	printf("Tanggal Lahir	: %s\n",ultah);
	printf("Alamat Rumah	: %s\n",alamat);
	printf("Telp Rumah	: %s\n",telp);
	printf("Cita-Cita	: %s\n",cita);
	printf("Nomor HP	: %s\n",hp);
	
	printf("\n");
	printf("Mahasiswa UPN Veteran Jawa Timur \n");
	printf("============================================\n");
	Sleep(2000);
	printf("\n");
	
	printf("SUKSES");
	printf("\n");
	
	return 0;
}
