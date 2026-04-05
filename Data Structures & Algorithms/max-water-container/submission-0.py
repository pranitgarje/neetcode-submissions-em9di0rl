class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n=len(heights)
        maxContent=0
        l=0
        r=n-1
        while l<r:
            w=r-l
            h=min(heights[l],heights[r])
            content=w*h
            maxContent=max(content,maxContent)
            if heights[l]<heights[r]:
                l+=1
            else:
                r-=1
        
        return maxContent


        