class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n=len(heights)
        nse=[n]*n
        pse=[-1]*n
        st1=[]
        for i in range(n):
            while st1 and heights[st1[-1]] > heights[i] :
                idx=st1.pop()
                nse[idx]=i
            
            st1.append(i)
        
        st2=[]
        for i in range(n-1,-1,-1):
            while st2 and heights[st2[-1]] > heights[i] :
                idx=st2.pop()
                pse[idx]=i
            
            st2.append(i)
        
        maxarea=0
        for i in range(n) :
            area=heights[i]*(nse[i]-pse[i]-1)   
            maxarea=max(maxarea,area)
        
        return maxarea
            


        
        