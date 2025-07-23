double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double nums[2001];
    int numsSize = 0;
    int i = 0, j = 0, n = 0;
    while(i < nums1Size && j < nums2Size)
    {
        if(nums1[i] < nums2[j])
            nums[n++] = nums1[i++];
        else
            nums[n++] = nums2[j++];
    }
    while(i < nums1Size)
    {
        nums[n++] = nums1[i++];
    }
    while(j < nums2Size)
    {
        nums[n++] = nums2[j++];
    }
    if(n % 2 == 1)
        return nums[n / 2];
    else
        return (nums[n / 2] + nums[n / 2 - 1]) / 2;

}