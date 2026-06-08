class Solution:
    def canJump(self, nums: List[int]) -> bool:
        # What is my greedy choice? -> whether I can reach my current goal from any previous index
        n=len(nums)
        farthest=0
        curr_end=0
        for i in range(n):
            farthest=max(farthest,nums[i]+i)
            if i == curr_end:
                curr_end=farthest
            
        return curr_end>=n-1
                


       
       
        
# O(N)