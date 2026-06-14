func jump(nums []int) int {
    n:=len(nums)
	curr_end:=0
	jumps:=0
	farthest:=0
	for i:=0;i<n-1;i++ {
		if i+nums[i] > farthest {
			farthest = i+nums[i]
		}
		if i==curr_end{
			jumps+=1
			curr_end=farthest
		}
	}
	return jumps
}
