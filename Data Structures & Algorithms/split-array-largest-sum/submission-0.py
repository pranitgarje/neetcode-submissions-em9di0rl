class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        max_val=0
        sum_n=0
        n=len(nums)
        for e in nums:
            max_val=max(max_val,e)
            sum_n+=e
        low=max_val
        high=sum_n
        
        while low < high :
            mid=(low+high)//2
            splits=1
            curr_sum=0
            for e in nums:
                if curr_sum + e <= mid :
                    curr_sum+=e
                    continue
                else : 
                    splits+=1
                    curr_sum=e
                    

            if splits <= k :  high = mid
            else : low = mid + 1
        
        return low
                

        