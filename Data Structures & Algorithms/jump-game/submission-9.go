func canJump(nums []int) bool {
    n:=len(nums)
    curr_end := 0
    farthest := 0
    for i:=0 ; i < n ; i++ {
        if i+nums[i] > farthest {
            farthest = i+nums[i]
        }
        if i == curr_end {
            curr_end = farthest
        }

    }
    return curr_end >= n-1
}
