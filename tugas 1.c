#include <stdio.h>
#include <stdlib.h>

	int main()
	{
	int npm[10];
    int a;
    float ipk[10];
    
    for(a=0;a<10;a++)
	{
		printf("Npm Mahasiswa = ");
		scanf("%d",&npm[a]);
	}
	
	for(a=0;a<10;a++)
	{
		printf("Isi IPK dari npm = ");
		scanf("%f",&ipk[a]);
	}
	
	printf("\n");
	
	for(a=0;a<10;a++)
	{
		printf("NPM %d adalah %f \n",npm[a],ipk[a]);
	}
	
	return 0;
	}