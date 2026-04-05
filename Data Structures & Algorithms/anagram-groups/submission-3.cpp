class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            mpp[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto [key,val]:mpp){
             res.push_back(val);
        }
        return res;
        
    }
};
