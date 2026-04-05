class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string lcp=strs[0];
        for(int i=1;i<n;i++){
            string curr=strs[i];
            if(curr.size()==0) return "";
            int j=0;
            while(lcp[j]==curr[j]){
                j++;
            }
            lcp=lcp.substr(0,j);

            
        }
        return lcp;  //O(n*m)
    }
};