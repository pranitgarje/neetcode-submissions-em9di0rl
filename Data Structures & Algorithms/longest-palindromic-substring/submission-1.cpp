class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int resLen=0;
        int resIdx=0;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i+1; 
            // checking for even length substring
            while((l>=0 && r <n) && s[l]==s[r]){
                if(resLen<r-l+1){
                    resIdx=l;
                    resLen=r-l+1 ;
                }
                l-- ;
                r++ ;
            }
            l=i;
            r=i; 
            // checking for odd length substring
            while((l>=0 && r <n) && s[l]==s[r]){
                if(resLen<r-l+1){
                    resIdx=l;
                    resLen=r-l+1 ;
                }
                l-- ;
                r++ ;
            }
        }
        return s.substr(resIdx,resLen) ;
    }
};
