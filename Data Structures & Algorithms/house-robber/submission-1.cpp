class Solution {
public:
int func(int i,vector<int> &nums,vector<int> &dp){
    if(i>=nums.size()){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
     return dp[i]=max(nums[i]+func(i+2,nums,dp),func(i+1,nums,dp));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return func(0,nums,dp);
        
    }
};
