//https://leetcode.com/problems/two-sum/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ret = (int*)malloc(sizeof(int) * 10000);
    int n = 0;
    for(int i = 0; i < numsSize; i++)
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
                {
                    ret[n++] = i;
                    ret[n++] = j;
                }
        }
    *returnSize = n;
    return ret;
}
