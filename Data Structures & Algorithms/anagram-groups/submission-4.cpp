class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(string s:strs){
            string ss=s;
            sort(ss.begin(),ss.end());
            mpp[ss].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto v:mpp){
            ans.push_back(v.second);
        }
        return ans;
    }
};
