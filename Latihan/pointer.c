#include <stdio.h>

int main(){
        int angka=10;
        int *p;

        p=&angka;
        printf("%d", *p);
        getchar();
        
        
        return 0;
}