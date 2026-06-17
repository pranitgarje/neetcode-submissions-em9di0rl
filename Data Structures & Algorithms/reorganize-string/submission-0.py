from heapq import heappush,heappop
from collections import Counter
class Solution:
    def reorganizeString(self, s: str) -> str:
        freq=Counter(s)
        pq=[]
        for c,f in freq.items():
            heappush(pq,(-f,c))
        
        res=[]
        prev_count=0
        prev_char=""
        while pq :
            cnt,ch=heappop(pq)
            res.append(ch)
            if prev_count < 0 :
                heappush(pq,(prev_count,prev_char))
            
            cnt+=1
            prev_count=cnt
            prev_char = ch
        
        ans="".join(res)

        return ans if len(ans) == len(s) else ""
        



       



        