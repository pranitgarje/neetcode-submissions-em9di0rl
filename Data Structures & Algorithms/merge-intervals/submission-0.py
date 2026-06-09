class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        n=len(intervals)
        last=[]
        last.append(intervals[0])
        for i in range(1,n):
            curr=intervals[i]
            if last[-1][1] >= curr[0] :
                last[-1][1] = max(last[-1][1],curr[1])
            else :
                last.append(curr)
        
        return last
        
        