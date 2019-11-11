
#include <stdio.h>
#include <conio.h>

main()
{
	int i;
	int l;
	int n=1;

	int k[2][2][2]={{{5,6},{5,2}},{{0,7},{4,8}}};
	
	printf("\t\tTampilan Pertama\n\n");
	
	for(i=0;i<2;i++)
	{
		printf("\nBaris %d\n",n++);
		
		for(l=0;l<2;l++)
		{
			printf("\n");
			printf("%d %d\t",k[i][l][0],k[i][l][1]);
			printf("\n");
		}
	}
	
};

