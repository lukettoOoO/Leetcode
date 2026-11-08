func topKFrequent(nums []int, k int) []int {
    m := make(map[int]int)
    result := make([]int, 0)

    for i := 0; i < len(nums); i++ {
        m[nums[i]]++
    }

    for range k {
        max_val := 0
        max_key := 0
        for key, val := range m {
            if val >= max_val {
                max_val = val
                max_key = key
            }
        }
        result = append(result, max_key)
        delete(m, max_key)
    }

    return result
}

func topKFrequent(nums []int, k int) []int {
    m := make(map[int]int)
    result := make([]int, 0)

    for i := 0; i < len(nums); i++ {
        m[nums[i]]++
    }

    buckets := make([][]int, len(nums) + 1)

    for key, val := range m {
        buckets[val] = append(buckets[val], key)
    }
    fmt.Println(buckets)

    for i := len(buckets) - 1; i >= 0 && k != 0; i-- {
        if len(buckets[i]) > 0 {
           for j := 0; j < len(buckets[i]); j++ {
                if k == 0 {
                    break
                }
                k--
                result = append(result, buckets[i][j])
           }
           if k == 0 {
                break
           }
        }
    }

    return result
}
