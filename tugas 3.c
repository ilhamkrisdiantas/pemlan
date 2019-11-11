#include <stdio.h>
#include <stdlib.h>

struct ipkmhs
{
	char nama;
	int npm;
	float ipk;
}mhs[5];

int main()
{
	int a;
	
	for(a=0;a<5;a++)
	{
		
    printf("Masukkan nama mahasiswa	= ");
    scanf("%s",&mhs[a].nama);
    
    printf("Masukkan NPM mahasiswa	= ");
    scanf("%d",&mhs[a].npm);
    
    printf("Masukkan IPK mahasiswa	= ");
    scanf("%f",&mhs[a].ipk);
    
	}
	
	printf("IPK yang dibawah 3\n");
	for(a=0;a<=5;a++)
	{
		if (mhs[a].ipk<3)
		{
			printf("%s\n", mhs[a].nama);
		}
	}
	puts("IPK yang di diatas 3\n");
	for(a=0;a<=5;a++)
	{
		if (mhs[a].ipk>3)
		{
			printf("%s\n", mhs[a].nama);
		}
	}		
		
		
    return 0;
}