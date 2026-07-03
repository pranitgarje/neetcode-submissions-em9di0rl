class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i+1; 
            // checking for even length substring
            while((l>=0 && r <n) && s[l]==s[r]){
                ans++ ;
                l-- ;
                r++ ;
            }
            l=i;
            r=i; 
            // checking for odd length substring
            while((l>=0 && r <n) && s[l]==s[r]){
               ans++ ;
                l-- ;
                r++ ;
            }
        }
       return ans;
    }
};
