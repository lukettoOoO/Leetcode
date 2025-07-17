int cmp(const void* a, const void* b)
{
    const int* int_a = (const int*)a;
    const int* int_b = (const int*)b;
    if (*int_a < *int_b) 
        return -1;
    else if (*int_a > *int_b) 
        return 1;
    else 
        return 0;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = 0; i < numsSize - 1; i++)
        if(nums[i] == nums[i + 1])
            return true;
    return false;
}
