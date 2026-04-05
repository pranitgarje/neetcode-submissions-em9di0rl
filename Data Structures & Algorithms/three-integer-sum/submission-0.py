class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
       nums.sort()
       n=len(nums)
       res=[]
       for i,a in enumerate(nums):
        if a>0:
            break
        if i>0 and a==nums[i-1]:
            continue
        
        j=i+1
        k=n-1
        while j<k:
            sum=a+nums[j]+nums[k]
            if sum>0:
                k-=1
            elif sum<0:
                j+=1
            else:
                res.append([a,nums[j],nums[k]])
                j+=1
                k-=1
                while j<k and nums[j]==nums[j-1]:
                    j+=1
        
       return res
                

        