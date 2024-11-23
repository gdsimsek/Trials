#include <stdio.h>
#include <stdlib.h>

char* convertToBase7(int num) {

    int i = 0;
    char* result = (char*)malloc(13 * sizeof(char));
    int negative = (num < 0);
    
    if (!result) return NULL;
    if (negative)
    {
        num = -num;
    }
    if (num == 0) 
    {
        result[i++] = '0';
    } 
    else 
    {
        while (num > 0) 
        {
            result[i++] = (num % 7) + '0';
            num /= 7;
        }
        if (negative) 
        {
            result[i++] = '-';
        }
    }
    result[i] = '\0';

    for (int k = 0, j = i - 1; k < j; k++, j--)
    {
        char temp = result[k];
        result[k] = result[j];
        result[j] = temp;
    }
    
    return result;
}