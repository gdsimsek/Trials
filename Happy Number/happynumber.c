#include <stdbool.h>

int calculate (int n)
{
    int total = 0;
    int b = 0;
    while (n > 0)
    {
        b =  n % 10;
        total += b * b;
        n = n / 10;
    }
    return total;
}


bool isHappy(int n) 
{
    int slow = n;
    int fast = calculate(n);
    
    while (fast != 1 && slow != fast)
    {
        slow = calculate(slow);
        fast = calculate(calculate(fast));
    }
    
    return fast == 1;
}