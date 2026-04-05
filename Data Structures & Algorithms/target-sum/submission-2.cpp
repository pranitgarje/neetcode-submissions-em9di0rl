class Solution {
public:
int func(int i,vector<int> &nums,int curr,int target,vector<vector<int>> &dp,int offset){
if(i==nums.size()){
    return curr==target?1:0;
}
if(dp[i][curr+offset]!=-1) return dp[i][curr+offset];
int plus=func(i+1,nums,curr+nums[i],target,dp,offset);
int minus=func(i+1,nums,curr-nums[i],target,dp,offset);
return dp[i][curr+offset]=plus+minus;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(2*sum+1,-1));
        return func(0,nums,0,target,dp,sum);
    }
};
