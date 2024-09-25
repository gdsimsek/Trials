int removeDuplicates(int* nums, int numsSize) {

    int reference = 0;

    if (numsSize == 0) return 0;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[reference])
        {
            reference++;
            nums[reference] = nums[i];
        }
        
    }
    return reference + 1;
}