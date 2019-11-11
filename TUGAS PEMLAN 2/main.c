#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



int pangkat(int a, int b){
	if(b == 1)
	{
		
		return a;
	}
	else
	{
		
		return a*pangkat(a,(b-1));
	}
}


int main()
{
	int a,b;
	int i=0;
	int hasil=1;
	
	printf("===...Hallo...=== \n\n");
	printf("\n");
	Sleep(2000);
	printf("\n");
	printf("Loading");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	printf("\n");
	
	printf("========================== \n");
	printf("Masukkan Angka	: ");
	scanf("%d",&a);
	printf("========================== \n");
	printf("Dipangkatkan	: ");
	scanf("%d",&b);
	printf("========================== \n");
	printf("\n");
	
	printf("Loading");
	Sleep(1000);

	printf(". \n");
	
	printf("\n");
	
	printf("Hasil Rekursifnya Adalah %d\n\n",pangkat(a,b));
	
	for(i=0;i<b;i++)
	{
		hasil=hasil*a;
	}
	
	printf("Hasil dari iterasi biasa adalah %d\n",hasil);
	
	return 0;
}
