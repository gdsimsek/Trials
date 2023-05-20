#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in)
{
    int i = 0;
    int j = 0;
    int len = strlen(str_in);
    char *dest = (char *)malloc((len) * sizeof(char));
    while (str_in[i])
    {
        if (str_in[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
            dest[j] = str_in[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
    return(dest);
}
