class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> mpp; //space O(N*K), N strings of avg length k
        vector<vector<string>> ans ;
        for(string s:strs){       // O(N*KLOGK)
            string t=s;
            sort(t.begin(),t.end());
            mpp[t].push_back(s);
        }
        for(auto v:mpp){           //O(N*K)
            vector<string> temp;
            for(string s:v.second){
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
