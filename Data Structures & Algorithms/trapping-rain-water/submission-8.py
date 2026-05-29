class Solution:
    def trap(self, height: List[int]) -> int:
        # Can be solved monotonous stack-> PGE+NSE
        n=len(height)
        s=[]
        total=0
        for i in range(n):
            while s and height[i] > height[s[-1]] :
                floor=height[s.pop()]
                if not s : break
                left=s[-1]
                width=i-left-1
                amt=width*(min(height[left],height[i])-floor)
                total+=amt
            s.append(i)
        
        return total