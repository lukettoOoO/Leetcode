func moveZeroes(nums []int)  {
    left := 0
    right := 0
    for right < len(nums) {
        if nums[right] != 0 {
            aux := nums[left]
            nums[left] = nums[right]
            nums[right] = aux
            left++
        }
        right++
    }
}
