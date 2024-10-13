#include <stdbool.h>
#include <string.h>

bool is_valid_ISBN_10 (const char *ISBN)
{
    int result = 0;

    if (strlen(ISBN) != 10) {
        return false;
    }
    for (int i = 0; i < 9; i++)
    {
        if (ISBN[i] < '0' || ISBN[i] > '9')
        {
            return false;
        }
        result += (ISBN[i] - '0') * (i + 1);
    }

    if (ISBN[9] == 'X') {
        result += 10 * 10;
    } else if (ISBN[9] >= '0' && ISBN[9] <= '9') {
        result += (ISBN[9] - '0') * 10;
    } else {
        return false;
    }

    return (result % 11 == 0);
}