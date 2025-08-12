class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        j = 1
        length = len(nums)
        while j < length:
            if nums[i] != nums[j]:
                i = i + 1
                nums[i] = nums[j]
            j = j + 1
        return i + 1
