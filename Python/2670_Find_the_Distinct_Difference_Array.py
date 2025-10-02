class Solution(object):
    def distinctDifferenceArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        dist = []
        for i in range(len(nums)):
            dist_prefix = 0
            dist_suffix = 0
            prefix = []
            suffix = []
            for j in range(i + 1): #prefix
                if nums[j] not in prefix:
                    prefix.append(nums[j])
                    dist_prefix += 1
            for k in range(i + 1, len(nums)): #suffix
                if nums[k] not in suffix:
                    suffix.append(nums[k])
                    dist_suffix += 1
            #print(dist_prefix, dist_suffix)
            dist.append(dist_prefix - dist_suffix)
        return dist

            
