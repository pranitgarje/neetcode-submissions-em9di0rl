class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x:x[1]) #Sort by end
        last=intervals[0]
        cnt=0
        for i in range(1,len(intervals)):
            if last[1] > intervals[i][0] :
                cnt+=1
                continue ;
            else :
               last=intervals[i]
            
        return cnt



        