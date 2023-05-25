#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseWords(const char* text) {
    int length;
    int i = 0;
    int j = 0;
    int size = strlen(text);
    char* dest = (char*)malloc((size + 1) * sizeof(char));
    while (text[i]) {
        length = 0;
        while (text[i] == ' ') {
            dest[j] = text[i];
            i++;
            j++;
        }
        while (text[i] != ' ' && text[i]) {
            length++;
            i++;
        }
        for (int k = i - 1; k >= i - length; k--) {
            dest[j] = text[k];
            j++;
        }
        if (text[i] == '\0') {
            break;
        }
        dest[j] = text[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return dest;
}