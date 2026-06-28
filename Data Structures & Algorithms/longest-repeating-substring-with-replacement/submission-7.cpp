class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        unordered_map<char,int> mpp;
        int max_freq=0;
        int curr_len=0;
        int max_len=0;
        for(int r=0;r<n;r++){
            mpp[s[r]]+=1 ;
            max_freq=max(max_freq,mpp[s[r]]);
            while(((r-l+1)-max_freq)>k){
                mpp[s[l]]-=1;
                if(mpp[s[l]]<1){
                    mpp.erase(s[l]);
                }
                l+=1 ;
            }
            max_len=max(max_len,r-l+1);

        }
        return max_len;
    }
};
