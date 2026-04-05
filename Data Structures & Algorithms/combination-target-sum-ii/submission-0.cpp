class Solution {
public:
set<vector<int>> res;
void backTrack(vector<int>& candidates, int target,vector<int>& curr,int i){
   
    if(target==0){
        res.insert(curr);
        return ;
    }
     if(i==candidates.size() || target<0) return ; 
    
      curr.push_back(candidates[i]);
      backTrack(candidates,target-candidates[i],curr,i+1);
      curr.pop_back();
      backTrack(candidates,target,curr,i+1);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        backTrack(candidates,target,curr,0);
        vector<vector<int>> ans;
        for(auto vec:res){
               ans.push_back(vec);
        }
        return ans;
    }
};
