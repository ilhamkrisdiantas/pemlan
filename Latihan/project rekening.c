#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
	
	struct alamat
	{
		char provinsi[30];
		char kota[30];
		char jln[30];
			
	};
	
	struct tanggal
	{
		int d;
		int m;
		int y;
	};
	
	struct nasabah
	{
		char nama[30];
		int umur;
		long rek;
		float saldo;
		struct alamat almt;
		struct tanggal tgl;
		
	};
 
int main()
{
	float total;
	int pilih;
	char a[30];
	int z;
	struct nasabah b[5];
	int i;
	menu:
	printf("\t\tSelamat Datang Di Bank Siregar\n");
	printf("==============\t==============\t==============\t==============\n\n");
	printf("\n");
	printf("\t\tSilahkan Pilih Menu Yang Tersedia\n\n");
	
	printf("\t1. Daftar Jadi Nasabah.\n");
	printf("\t2. Data Nasabah.\n");
	printf("\t3. Pencarian.\n");
	printf("\t4. Total Saldo Dari Seluruh Nasabah.\n\n");
	
	printf("Pilih = ");
	scanf("%d",&pilih);
	
	system("cls");
	
	switch(pilih)
	{
	case 1:
		printf("Pendaftaran Harus Sekaligus 5 Pelanggan");
		for(i=0;i<5;i++)
		{
		printf("\tMasukkan Data Berikut\n");
		printf("\tData Ke %d\n",i+1);
		printf("Masukkan Nama Anda	= ");
		scanf("%s",b[i].nama);
		
		printf("\n");
		printf("Umur Anda	= ");
		scanf("%d",&b[i].umur);
		printf("\n");
		printf("tanggal Ulang Tahun	:\n");
		printf("Tanggal	= ");
		scanf("%d",&b[i].tgl.d);
		printf("Bulan Ke	= ");
		scanf("%d",&b[i].tgl.m);
		printf("Tahun ke	= ");
		scanf("%d",&b[i].tgl.y);
		
		printf("Tempat Tinggal :\n");
		printf("Provinsi	= ");
		scanf("%s",b[i].almt.provinsi);
		printf("Kota	= ");
		scanf("%s",b[i].almt.kota);
		printf("Alamat Jalan	= ");
		scanf("%s",b[i].almt.jln);
		printf("\n");
		
		b[i].rek = rand()%1001+8999;
		printf("No Rekening Anda Adalah = %ld\n",b[i].rek);
		
		printf("Masukkan Saldo	= Rp. ");
		scanf("%f",&b[i].saldo);
		
		system("cls");
		
		}
		goto menu;
		break;
	
	case 2:
		printf("\n");
		printf("\nSeluruh Data Nasabah\n");
		for(i=0;i<5;i++)
		{
			printf("Nama	= %s\n",b[i].nama);
			printf("Umur	= %d\n",b[i].umur);
			printf("Lahir Tanggal %d Bulan %d Tahun %d\n",b[i].tgl.d,b[i].tgl.m,b[i].tgl.y);
			printf("Provinsi	= %s\n",b[i].almt.provinsi);
			printf("Kota	= %s\n",b[i].almt.kota);
			printf("Alamat Tinggal	= %s",b[i].almt.jln);
			printf("No.Rekening	= %ld\n",b[i].rek);
			printf("Saldo Saat Ini	= %f\n",b[i].saldo);
		}
		goto menu;
		break;
	
	case 3:
		printf("\n");
		printf("\t\tPencarian Berdasarkan\n");
		printf("\t1. Nama.\n");
		printf("\t2. Umur\n");
		printf("\t3. Provinsi\n");
		printf("\t4. Saldo Terbanyak\n");
		scanf("%d",&pilih);
		
			if(pilih==1)
			{
				printf("Nama Yang Dicari = ");
				scanf("%s",a);
				printf("Pencarian Berdasarkan Nama = %s",a );
				
			for(i=0;i<5;i++)
			
			if(b[i].nama==a)
			printf("\n %d. %s \n\n",i+1,b[i].nama);
			}
			
			if(pilih==2)
			{
				printf("Umur Yang Dicari = ");
				scanf("%d",&z);
				printf("Pencarian Berdasarkan Umur %d",z);
			for(i=0;i<5;i++)
			
			if(b[i].umur==z)
			printf("\n %d. %d \n\n",i+1,b[i].umur);
			}
			
			if(pilih==3)
			{
				printf("Provinsi Yang Dicari = ");
				scanf("%s",a);
				printf("Pencarian Berdasarkan Provinsi %s",a);
			for(i=0;i<5;i++)
			
			if(b[i].almt.provinsi==a)
			printf("\n %d. %s \n\n",i+1,b[i].almt.provinsi);
			}
			
			if(pilih==4)
			{
				printf("Pencarian Berdasarkan Saldo Terbanyak.");
			for(i=0;i<5;i++)
			
			if(b[i].saldo<1000000)
			printf("\n %d. %s Dengan Saldo %f \n\n",i+1,b[i].nama,b[i].saldo);
			}
			
		goto menu;
		break;
	
	case 4:
		for(i=0;i<5;i++)
		{
			total=total+b[i].saldo;
		}
		printf("Saldo Terkumpul Dari Semua Nasabah = Rp. %f",total);
		goto menu;
		break;
		}
	
    return 0;
}