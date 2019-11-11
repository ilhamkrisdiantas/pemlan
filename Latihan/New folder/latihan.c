#include <stdio.h>
#include <stdlib.h>

struct NODE {
 int number;
 struct NODE *next;
};


void append_node(struct NODE *llist, int num);
int  search_value(struct NODE *llist, int num);
void display_list(struct NODE *llist);


int main(void) {
 int num = 0;
 int input = 5;
 int retval = 0;
 struct NODE *llist;

 llist = (struct NODE *)malloc(sizeof(struct NODE));
 llist->number = 0;
 llist->next = NULL;

while(input != 0) {
  printf("\n\t\t\t\t\t===== Pilih Menu =====\n");
  
  printf("\t 0: Selesai\n");
  printf("\t 1: Masukkan Angka\n");
  printf("\t 2: Mencari\n");
  printf("\t 3: Tampilkan Keseluruhan\n");
  
  printf("\t\nPilihan: ");scanf("%d", &input);

if(input==0){
    printf("...Terimakasih...\n");
}
else if(input==1){
    
    printf("Masukkan Nilai : ");
    scanf("%d", &num);
    
	append_node(llist, num);
}
else if(input==2){
    
    printf("Masukkan Angka Yang Akan di Cari : ");
    scanf("%d", &num);
    
	if((retval = search_value(llist, num)) == -1)
        printf("Value `%d' not found\n", num);
    else
        printf("Value `%d' located at position `%d'\n", num, retval);
}
else if(input==3){
    
	printf("Menampilkan Angka Keseluruhan\n");
    display_list(llist);
}}

 free(llist);
 return(0);
}

void append_node(struct NODE *llist, int num) {
 while(llist->next != NULL)
  llist = llist->next;

 llist->next = (struct NODE *)malloc(sizeof(struct NODE));
 llist->next->number = num;
 llist->next->next = NULL;
}

int search_value(struct NODE *llist, int num) {
 int retval = -1;
 int i = 1;

 while(llist->next != NULL) {
  if(llist->next->number == num)
   return i;
  else
   i++;

  llist = llist->next;
 }

 return retval;
}

void display_list(struct NODE *llist) {
 while(llist->next != NULL) {
  printf("%d ", llist->number);
  llist = llist->next;
 }

 printf("%d", llist->number);
}