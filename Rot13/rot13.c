#include <stdio.h>

char *rot13 (char *str_out, const char *str_in)
{
    int i = 0;
    while (str_in[i])
    {
        char c = str_in[i];
        if (c >= 'a' && c <= 'z')
        {
            if (c > 'm')
            {
                str_out[i] = c - 13;
            }
            else
            {
                str_out[i] = c + 13;
            }
        }
        else if (c >= 'A' && c <= 'Z')
        {
            if (c > 'M')
            {
                str_out[i] = c - 13;
            }
            else
            {
                str_out[i] = c + 13;
            }
        }
        else
        {
            str_out[i] = c;
        }
        i++;
    }
    str_out[i] = '\0';
    return str_out;
}