#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],c,i,b,n=10;
    printf("Bubble Sort\n");
    printf("Masukkan 10 Data Berupa Angka Yang Ingin Dimasukkan : \n");
    
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

    printf("\nData Sebelum Di Urutkan : ");

    for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}

    for(i=n-2;i>=0;i--)
	{
        for(b=0;b<=i;b++)
		{
            if(a[b]>a[b+1])
			{
                c=a[b];
                a[b]=a[b+1];
                a[b+1]=c;
            }
        }
    }
    printf("\nData Setelah Di Urutkan : ");
    
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
	
	printf("\n\n\t\t\tTerima Kasih.\n\n\n");

	return 0;
}
