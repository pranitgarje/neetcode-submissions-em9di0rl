class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        n=len(piles)
        piles.sort()
        l=1
        
        r=piles[n-1]
        while l<r:
            m=(l+r)//2
            t=0
            for i in range(n):
                t+=(math.ceil(piles[i]/m))
            if t <= h:
                r=m
            else :l=m+1
        
        return l
        
        


        