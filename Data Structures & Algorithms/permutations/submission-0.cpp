class Solution {
public:
void backTrack(vector<int>& nums,vector<bool>& vis,  vector<int>& curr,vector<vector<int>>& res){
    if(curr.size()==nums.size()){
        res.push_back(curr);
        return ;
    }
   
    for(int j=0;j<nums.size();j++){
       if(!vis[j]){
        vis[j]=true;
        curr.push_back(nums[j]);
        backTrack(nums,vis,curr,res);
        vis[j]=false;
        curr.pop_back();
       }
       
        

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> vis(nums.size());
        vector<int> curr;
        vector<vector<int>> res;
        backTrack(nums,vis,curr,res);
        return res;

    }
};
