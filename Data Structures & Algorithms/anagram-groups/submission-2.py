class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
        freq={}
        for c in s:
            if c in freq:
                freq[c]+=1
            else:
                freq[c]=1
            
        for c in t:
            if c in freq:
                freq[c]-=1
            else:
                return False
            
            if freq[c]==0:
                del freq[c]
        
        return True
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res=[]
        used=[False]*len(strs) 
        n=len(strs)
        for i in range(n):
            curr=[]
            if not used[i]:
                used[i]=True
                curr.append(strs[i])
                for j in range(i+1,n):
                    if not used[j]:
                        if self.isAnagram(strs[i],strs[j])==True :
                            used[j]=True
                            curr.append(strs[j])
            else:
                continue

            res.append(curr[:])

        return res


        