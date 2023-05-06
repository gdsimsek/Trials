#include <stdio.h>

void yazdir(int satir, int sutun)
{
    int sat;
    int sut;
    sat = 1;
    while (sat <= satir)
    {
        sut = 1;
        while(sut <= sutun)
        {
            if ((sat == 1 && sut == 1) || (sat == 1 && sut == sutun))
            {
                printf("A");
            }
            else if ((sat == satir && sut == 1) || (sut == sutun && sat == satir))
            {
                printf("C");
            }
            else if ((sut == 1) || (sut == sutun) || (sat == satir) || (sat == 1))
            {
                printf("B");
            }
            else
            {
                printf(" ");
            }
            sut++;
          
        }
        printf("\n");
        sat++;
    }
    
}