class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int n=s.size();
        unordered_map<int,int> mpp;
        int maxLen=0;
        for(int r=0;r<n;r++){
          if(mpp.find(s[r])!=mpp.end()){
          if(mpp[s[r]]>=l){
                l=mpp[s[r]]+1;
          }
            
          }
           maxLen=max(maxLen,r-l+1);
           mpp[s[r]]=r;
              
              
            
        }
        return maxLen;
    }
};
