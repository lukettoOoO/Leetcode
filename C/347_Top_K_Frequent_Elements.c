/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct
{
    int num;
    int freq;
}Frequency;

int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int comp_freq(const void *a, const void *b)
{
    Frequency n1 = *(Frequency*)a;
    Frequency n2 = *(Frequency*)b;
    return n2.freq - n1.freq;
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    int* returnNums = malloc(10000 * sizeof(int));
    int n = 0;
    Frequency* f = malloc(10000 * sizeof(Frequency));
    int nf = 0;
    qsort(nums, numsSize, sizeof(int), comp);
    int count = 1;
    int i;
    for(i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] != nums[i + 1])
        {
            f[nf].num = nums[i];
            f[nf].freq = count;
            nf++;
            count = 1;
        }
        else
           count++;
    }
    f[nf].num = nums[i];
    f[nf].freq = count;
    nf++;
    /*for(i = 0; i < nf; i++)
    {
        printf("NUM: %d -> FREQ: %d\n", f[i].num, f[i].freq);
    }*/
    qsort(f, nf, sizeof(Frequency), comp_freq);
    /*for(i = 0; i < nf; i++)
    {
        printf("NUM: %d -> FREQ: %d\n", f[i].num, f[i].freq);
    }*/
    for(i = 0; i < k; i++)
    {
        returnNums[n++] = f[i].num;
    }
    
    *returnSize = n;
    return returnNums;
}
