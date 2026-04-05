class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        unordered_map<int,int> lastIdx;
        for(int i=0;i<n;i++){
            lastIdx[s[i]]=i;
        }
        int r=lastIdx[s[0]];
        int l=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
         
            if(lastIdx[s[i]]>r){
                r=lastIdx[s[i]];
            }
               if(i==r){
             ans.push_back(r-l+1);
             l=r+1;
             r=lastIdx[s[l]];
            }
        }
        return ans;

    }
};
