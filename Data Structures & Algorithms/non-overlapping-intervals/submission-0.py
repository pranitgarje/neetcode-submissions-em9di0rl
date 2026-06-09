class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x:x[1]) #Sort by end
        ans=[]
        ans.append(intervals[0])
        cnt=0
        for i in range(1,len(intervals)):
            if ans[-1][1] > intervals[i][0] :
                cnt+=1
                continue ;
            else :
                ans.append(intervals[i])
            
        return cnt



        