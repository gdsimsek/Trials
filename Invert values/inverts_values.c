#include <stdio.h>
#include <stddef.h>

void invert(int *values, size_t values_size)
{
    int tmp;
    int j = 0;
    int i = 0;
    while(i < values_size)
    {
        tmp = -values[i];
        values[i] = tmp;
        i++;
    }
    while (j < values_size)
    {
        printf("\n %d",values[j]);
        j++;
    }
}