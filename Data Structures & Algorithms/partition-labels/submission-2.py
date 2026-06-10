class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        last_occurence={}
        for i,e in enumerate(s) :
            last_occurence[e]=i
        ans=[]
        farthest=0
        start=0
        for i,e in enumerate(s):
            farthest=max(farthest,last_occurence[e])
            if i==farthest:
                ans.append(farthest-start+1)
                start=i+1
        return ans
        
        