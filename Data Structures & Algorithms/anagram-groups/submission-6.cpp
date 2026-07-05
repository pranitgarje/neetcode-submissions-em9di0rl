class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> ans ;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            mpp[t].push_back(s);
        }
        for(auto v:mpp){
            vector<string> temp;
            for(string s:v.second){
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
