func containsDuplicate(nums []int) bool {
     m := make(map[int]int)
    for i := 0; i < len(nums); i++ {
        m[nums[i]]++
    }
    //fmt.Println(m)
    for _, value := range(m) {
        if value > 1 {
            return true
        }
    }
    return false
}
