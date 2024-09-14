#include <stddef.h>
#include <stdio.h>

size_t countBits(unsigned value)
{
	size_t sayac = 0;
    while (value > 0)
    {
        sayac += value % 2;
        value = value / 2;
    }
    return sayac;
}