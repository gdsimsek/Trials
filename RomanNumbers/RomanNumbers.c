#include <stdio.h>
#include <stdlib.h>

unsigned from_roman(const char* roman)
{
    int i = 0;
    unsigned count = 0;
    while (roman[i])
    {
        if (roman[i] == 'M')
        {
            count += 1000;
        }
        else if (roman[i] == 'C')
        {
            if (roman[i + 1] == 'M')
            {
                count += 900;
                i++;
            }
            else if (roman[i + 1] == 'D')
            {
                count += 400;
                i++;
            }
            else
            {
                count += 100;
            }
        }
        else if (roman[i] == 'D')
        {
            count += 500;
        }
        else if (roman[i] == 'X')
        {
            if (roman[i + 1] == 'C')
            {
                count += 90;
                i++;
            }
            else if (roman[i + 1] == 'L')
            {
                count += 40;
                i++;
            }
            else
            {
                count += 10;
            }
        }
        else if (roman[i] == 'L')
        {
            count += 50;
        }
        else if (roman[i] == 'I')
        {
            if (roman[i + 1] == 'X')
            {
                count += 9;
                i++;
            }
            else if (roman[i + 1] == 'V')
            {
                count += 4;
                i++;
            }
            else
            {
                count += 1;
            }
        }
        else if (roman[i] == 'V')
        {
            count += 5;
        }
        i++;
    }
    return count;
}

void to_roman(unsigned number, char* roman)
{
    int i = 0;
    
    while (number > 0)
    {
        if (number >= 1000)
        {
            roman[i] = 'M';
            number -= 1000;
        }
        else if (number >= 900)
        {
            roman[i] = 'C';
            i++;
            roman[i] = 'M';
            number -= 900;
        }
        else if (number >= 500)
        {
            roman[i] = 'D';
            number -= 500;
        }
        else if (number >= 400)
        {
            roman[i] = 'C';
            i++;
            roman[i] = 'D';
            number -= 400;
        }
        else if (number >= 100)
        {
            roman[i] = 'C';
            number -= 100;
        }
        else if (number >= 90)
        {
            roman[i] = 'X';
            i++;
            roman[i] = 'C';
            number -= 90;
        }
        else if (number >= 50)
        {
            roman[i] = 'L';
            number -= 50;
        }
        else if (number >= 40)
        {
            roman[i] = 'X';
            i++;
            roman[i] = 'L';
            number -= 40;
        }
        else if (number >= 10)
        {
            roman[i] = 'X';
            number -= 10;
        }
        else if (number >= 9)
        {
            roman[i] = 'I';
            i++;
            roman[i] = 'X';
            number -= 9;
        }
        else if (number >= 5)
        {
            roman[i] = 'V';
            number -= 5;
        }
        else if (number >= 4)
        {
            roman[i] = 'I';
            i++;
            roman[i] = 'V';
            number -= 4;
        }
        else
        {
            roman[i] = 'I';
            number -= 1;
        }
        i++;
    }
    roman[i] = '\0';
}