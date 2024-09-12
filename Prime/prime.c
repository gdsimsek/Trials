#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>

void prime(unsigned m, size_t *z, unsigned *primes) {

    unsigned int index = 0;

    for (unsigned int i = 2; i <= m; i++)
    {
        int is_prime = 1;
        for (unsigned int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            primes[index] = i;
            index++;
        }
    }
    
    *z = index;
}