#include <stdlib.h>
#include <stdbool.h>

bool isSelfDividing(int n)
{
    int divid = 0;
    int temp = n;
    while (temp > 0)
    {
        divid = temp % 10;
        if (divid == 0 || n % divid != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

int* selfDividingNumbers(int left, int right, int* returnSize) {

    int *array = (int *)malloc((right - left + 1) * sizeof(int));
    int  j = 0;
    for (int i = left; i <= right; i++)
    {
        if (isSelfDividing(i) == true)
        {
            array[j] = i;
            j++;
        }
    }
    *returnSize = j;
    return array;
}