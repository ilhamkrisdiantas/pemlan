#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int i, awal, akhir, tengah, n, cari, array[100];
 
   printf("Masukkan data yang dimasukkan : \n");
   scanf("%d",&n);
 
   printf("Masukkan %d data berupa angka yang ingin dimasukkan \n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);
 
   printf("\nAngka yang dicari : ");
   scanf("%d", &cari);
   
   awal = 0;
   akhir = n - 1;
   tengah = (awal+akhir)/2;
 
   while (awal <= akhir) 
   {
    if (array[tengah] < cari)
      	
         awal = tengah + 1;    
      
	else if (array[tengah] == cari) {
         printf(" \nData angka %d ada dan berada di urutan %d.\n", cari, tengah+1);
         break;
	}
    else
  	  akhir = tengah - 1;
 
      tengah = (awal + akhir)/2;
   }
   if (awal > akhir)
      printf("%d Tidak ketemu\n", cari);
 
    return 0;
}