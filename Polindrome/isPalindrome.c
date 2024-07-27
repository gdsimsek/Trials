#include <stdbool.h>
#include <string.h>


bool isPalindrome(int x) {
    
    char str[12];
    sprintf(str, "%d", x);
    int length = strlen(str);
    int j = length - 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[j]) 
        {
            return false;
        }
        j--;
    }
    return true;
}