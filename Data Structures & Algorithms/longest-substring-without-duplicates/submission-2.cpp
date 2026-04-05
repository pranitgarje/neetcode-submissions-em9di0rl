class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int n=s.size();
        set<char> st;
        int maxLen=0;
        for(int r=0;r<n;r++){
           if(st.count(s[r])){
              
                while(s[l]!=s[r]){
                    st.erase(s[l]);
                    l++ ;
                }
                st.erase(s[r]);
                l++ ;
                
           }
           maxLen=max(maxLen,r-l+1);
           st.insert(s[r]);
              
              
            
        }
        return maxLen;
    }
};
