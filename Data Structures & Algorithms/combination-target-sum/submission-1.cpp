class Solution {
public:
vector<vector<int>> res;
void backTrack(vector<int>& nums,int i, int target,vector<int> &temp){
    if(i>=nums.size()|| target<0) return ;
    if(target==0){
        res.push_back(temp);
        return ;
    } 
    temp.push_back(nums[i]);
    backTrack(nums,i,target-nums[i],temp);
    temp.pop_back();
    backTrack(nums,i+1,target,temp);
   
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        int sum=0;
        backTrack(nums,0,target,temp);
        return res;

    }
};
