class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> freq;
          int maxFreq=0;
          int maxLen=0;
          int l=0;
          for(int r=0;r<n;r++){
            freq[s[r]]++ ;
            maxFreq=max(maxFreq,freq[s[r]]);
            if((r-l+1)-maxFreq<=k){
                maxLen=r-l+1;
            }
            else{
                freq[s[l]]-- ;
                l++ ;
            }
           
          }
          return maxLen;
    }
};
