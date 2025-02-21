#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {

    if (strlen(s) != strlen(t)) {
        return false;
    }

    int test[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        test[s[i] - 'a']++;
        test[t[i] - 'a']--;
    }
    
    for (int j = 0; j < 26; j++)
    {
        if(test[j] != 0) {
            return false;
        }
    }

    return true;
}