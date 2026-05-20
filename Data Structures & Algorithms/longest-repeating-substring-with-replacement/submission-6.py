class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        n=len(s)
        freq=defaultdict(int)
        l=0
        max_freq=0
        maxLen=0
        for r in range(n):
          freq[s[r]]+=1
          max_freq=max(max_freq,freq[s[r]])
          if (r-l+1)-max_freq>k:
            freq[s[l]]-=1
            l+=1
          maxLen=max(maxLen,r-l+1)
          
        return maxLen