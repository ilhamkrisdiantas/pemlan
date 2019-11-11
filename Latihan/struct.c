#include <stdio.h>
#include <stdlib.h>

struct manusia {  
	char nama[100];  
	int umur;  
};  
  
struct siswa {  
	char kelas[60];  
	char npm;  
	struct manusia orang;  
};  
  
int main(void){  
	struct siswa hery = {"Pemograman Lanjut B", 18081010103, {"Hery Vandoro", 21}};  
   
	printf("Nama Siswa : %s\n", hery.orang.nama);
	printf("Umur : %d\n", hery.orang.umur);

	printf("Kelas : %s\n", hery.kelas);
	printf("No Absen : %d\n", hery.no_absen);
   

	return 0;  
}