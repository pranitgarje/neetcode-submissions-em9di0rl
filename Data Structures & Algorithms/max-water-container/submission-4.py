class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n=len(heights)
        l=0
        r=n-1
        maxAmount=0
        while l<r:
            h=min(heights[l],heights[r])
            w=r-l
            a=h*w
            maxAmount=max(maxAmount,a)
            if(heights[l]<heights[r]):l+=1
            else : r-=1
        
        return maxAmount

        