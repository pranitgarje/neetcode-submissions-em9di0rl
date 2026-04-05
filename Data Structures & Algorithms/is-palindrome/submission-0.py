import re
class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned=re.sub(r'[^A-Za-z0-9]','',s)
        newstr=cleaned.lower()

        l=0;
        r=len(newstr)-1
        while l<r:
            if newstr[l]!=newstr[r]:
                return False
            l+=1
            r-=1
        
        return True