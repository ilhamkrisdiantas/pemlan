#include <stdio.h>
#include <stdlib.h>


struct mahasiswa
{
	char nama[50];
	float ips;
	float ipk;
};

int main()
{
	struct mahasiswa a[3][2];
	int i,k,b,n;
	
	
    printf("\n\nSelamat Datang\n");
    
    for(i=0;i<3;i++)
	
		printf("Masukkan Nama	= ");
		gets(a[i].nama);
		
		printf("Masukkan Nilai Mata Kuliah.\n");
	
		for(b=0;b<3;b++)
		{
			for(k=0;k<2;k++)
			{
				for(i=0;i<2;i++)
				{
				printf("Nilai MK %d = ",n+1)
				scanf("%f",a[i][i].ipk);
				}
			}
		}
		
		printf("Hasil Dari Tampilan );
    
    return 0;
}