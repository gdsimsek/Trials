#include <stdbool.h>

bool isUgly(int n) {
    
    if(n == 0) return false;

    int divisors[] = {2,3,5};
    for (int i = 0; i < 3; i++)
    {
        while(n % divisors[i] == 0)
        {
            n /= divisors[i];
        }
    }
    return n == 1;
}