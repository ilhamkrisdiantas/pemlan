#include <stdio.h>
#include <stdlib.h>


	struct mahasiswa
	{
		int npm;
		float ipk;
	}mahasiswa[10];
	
	
	int main()
	{
	int a;
	
	
    for(a=0;a<10;a++)
	{
		printf("Npm Mahasiswa = ");
		scanf("%d",&mahasiswa[a].npm);
	}
	
	for(a=0;a<10;a++)
	{
		printf("Isi IPK dari npm = ");
		scanf("%f",&mahasiswa[a].ipk);
	}
	
	printf("\n");
	
	for(a=0;a<10;a++)
	{
		printf("NPM %d IPK nya adalah %f \n",mahasiswa[a].npm,mahasiswa[a].ipk);
	}
	
	return 0;
	}