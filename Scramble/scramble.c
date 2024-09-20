#include <stdbool.h>

bool scramble(const char *str1, const char *str2)
{
    int count[26] = {0};
    int i = 0;

    for (i = 0; str1[i] !='\0'; i++)
    {
        count[str1[i] - 'a']++;
    }
    for ( i = 0; str2[i] != '\0'; i++)
    {
        count[str2[i] - 'a']--;
    }
    for ( i = 0; i < 26; i++)
    {
        if (count[i] < 0)
        {
            return false;
        }
    }
    return true;
}