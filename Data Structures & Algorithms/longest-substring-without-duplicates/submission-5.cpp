class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Variable size window
        // invalid when a character repeats
        // aggregate is a map or set.
        // increment until valid, shrink on invalid
        int n=s.size();
        set<char> st;
        int l=0;
        int max_len=0;
        for(int r=0;r<n;r++){
                while(st.count(s[r])){
                    st.erase(s[l]);
                    l++ ;
                    
            }
            max_len=max(max_len,r-l+1);
            st.insert(s[r]);
        }
        return max_len;
        
    }
};
