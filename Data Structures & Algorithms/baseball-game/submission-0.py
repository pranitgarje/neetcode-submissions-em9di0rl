class Solution:
    def calPoints(self, operations: List[str]) -> int:
        s=[]
        n=len(operations)
        for o in operations :
            if o == "C" :
                if s : s.pop()
            
            elif o == "D" :
                s.append(2*s[-1])
            
            elif o == "+" :
                if len(s)>=2:
                    a=s[-1]
                    b=s[-2]
                    s.append(a+b)
            else :
                s.append(int(o))
            
        
        ans=0
        while s :
            ans+=s.pop()
        
        return ans

        