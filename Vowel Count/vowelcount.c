#include <stddef.h>
#include <unistd.h>
#include <stddef.h>

int get_count(const char *s)
{
    int i = 0;
    char vowels[] = "aioeu";
    int a = 0;
    while (s[a])
    {
        int b = 0;
        while (vowels[b])
        {
            if (s[a] == vowels[b])
            {
                i++;
            }
            b++;
        }
        a++;
    }
    return i;
}