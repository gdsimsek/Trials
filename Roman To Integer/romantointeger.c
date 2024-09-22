#include <stdio.h>
#include <string.h>

int roman_to_int_value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romanToInt(char* s) 
{
    int total = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++)
    {
        int current_value = roman_to_int_value(s[i]);
        int next_value = (i + 1 < len) ? roman_to_int_value(s[i + 1]) : 0;
        if (current_value < next_value)
        {
            total -= current_value;
        }
        else
        {
            total += current_value;
        }
    }
    return total;
}