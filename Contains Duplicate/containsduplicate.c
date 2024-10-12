#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {

    int next_value;
    int current_value;
    for (int i = 0; i < numsSize; i++)
    {
        current_value = nums[i];
        
        for (int j = i + 1; j < numsSize; j++)
        {
                next_value = (j < numsSize) ? nums[j] : 0;
                if (current_value == next_value)
                {
                    return true;
                }
        }
    }
    return false;
}