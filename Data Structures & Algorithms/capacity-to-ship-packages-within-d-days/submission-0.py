class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        # what is the answer space? -> range of capacities i.e maxweight.......sumofweights
        # Condition function -> req_days <= days 
        # monotonicity -> cond(mid) = true then cond(mid+1) = true
       
        n=len(weights)
        max_w=0
        sum_w=0
        for i in range(n):
            max_w=max(max_w,weights[i])
            sum_w+=weights[i]
        low=max_w
        high=sum_w
        while low < high :
            mid=(low+high)//2
            curr_load=0
            req_days=1
            for w in weights:
                if curr_load + w > mid:
                    req_days+=1
                    curr_load=0
                curr_load+=w
                

            
            if req_days <= days : high = mid
            else : low = mid+1
        
        return low

