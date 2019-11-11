#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],b,c,i,n=10;
    printf("Bubble Sort\n");
    printf("Masukkan 10 Data Berupa Angka Yang Ingin Dimasukkan : \n");
    
	for(i=0;i<n;i++)
	{
printf("Data %d = ",i);
	scanf("%d",&a[i]);
	}

    printf("\nData Sebelum Di Urutkan : ");

    for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}

    for(i=1;i<n;i++)
	{
        c=a[i];
        b=i-1;
        while((c<a[b])&&(b>=0))
		{
			a[b+1]=a[b];
			b=b-1;
		}
		a[b+1]=c;
    }
    printf("\nData Setelah Di Urutkan : ");
    
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
	
	printf("\n\n\t\t\t\t\tTerima Kasih.\n\n\n");

	return 0;
}
