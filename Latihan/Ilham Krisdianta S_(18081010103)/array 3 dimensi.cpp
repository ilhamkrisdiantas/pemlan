
#include <stdio.h>
#include <conio.h>


main()
{
	int i;
	int s;
	
    char h=64, nama[5][4][20] = {
       "AC Milan","Barcelona","Porto","Monaco",
        "Liverpool","Real Madrid","CSK Moskow","PSG",
        "Inter Milan","Arsenal","Atletico Madrid","Ajax",
        "AS Roma","Manchester United","Dortmund","Valencia",
        "Manchester City","Bayern Munich","Napoli","Vilareal"  
    
    };

    printf("Liga Champions : \n\n");

    for(i=0; i<5; i++)
    {
        ++h;
        printf("Grup %c  \n", h);

        for(s=0; s<4; s++)
        {
            printf("      %d. %s \n", s+1, nama[i][s]);   
        }
        printf("\n");
    }
    

    getch();

}
