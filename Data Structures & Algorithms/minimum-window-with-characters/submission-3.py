class Solution:
    def minWindow(self, s: str, t: str) -> str:
        n=len(s)
        k=len(t)
        count=defaultdict(int)
        for i in range(k):
            count[t[i]]+=1
        need=len(count)
        have=0
        l=0
        minlen=math.inf
        res=[-1,-1]
        count2=defaultdict(int)
        for r in range(n):
            count2[s[r]]+=1
            if count[s[r]]==count2[s[r]]: have+=1
            while(have==need):
                if r-l+1 < minlen:
                    res=[l,r]
                    minlen=r-l+1
               
                count2[s[l]]-=1
                if count2[s[l]]<count[s[l]] : have-=1
                l+=1
        return s[res[0]:res[1]+1]

        
        