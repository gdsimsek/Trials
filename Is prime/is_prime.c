#include <stdbool.h>
#include <math.h>

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
  return true;
}