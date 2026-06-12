class Solution:
    def isPalindrome(self,s:str) -> bool :
        l=0
        r=len(s)-1
        while l < r :
            if s[l] != s[r] : return False
            else :
                l+=1
                r-=1
        return True
    def validPalindrome(self, s: str) -> bool:
        for i in range(len(s)):
            t=s[:i]+s[i+1:]
            if(self.isPalindrome(t)) : return True
        
        return False
        