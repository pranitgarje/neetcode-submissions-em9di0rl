class Solution {
public:
vector<vector<int>> res;
void backTrack(vector<int>& nums,int i, int target,int& sum,vector<int> &temp){
    if(i>=nums.size()|| sum>target) return ;
    if(sum==target){
        res.push_back(temp);
        return ;
    } 
    for(int j=i;j<nums.size();j++){
        temp.push_back(nums[j]);
        sum+=nums[j];
        backTrack(nums,j,target,sum,temp);
        temp.pop_back();
        sum-=nums[j];
        // backTrack(nums,j,target,sum,temp);
    }
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        int sum=0;
        backTrack(nums,0,target,sum,temp);
        return res;

    }
};
