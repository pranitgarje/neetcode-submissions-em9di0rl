class Solution {
public:
vector<vector<int>> res;
void backTrack(vector<int>& candidates, int target,vector<int>& curr,int i){
   
    if(target==0){
        res.push_back(curr);
        return ;
    }
     for(int j=i;j<candidates.size();j++){
        if(j>i && candidates[j]==candidates[j-1]) continue;
        if(candidates[j]>target) break;
        curr.push_back(candidates[j]);
        backTrack(candidates,target-candidates[j],curr,j+1);
        curr.pop_back();
     }
      
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        backTrack(candidates,target,curr,0);
        
        return res;
    }
};
