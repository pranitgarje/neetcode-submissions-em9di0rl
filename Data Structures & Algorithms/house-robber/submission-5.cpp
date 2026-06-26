class Solution {
public:
int dfs(int i, int n , vector<int> &nums,vector<int> &dp){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(nums[i]+dfs(i+2,n,nums,dp),dfs(i+1,n,nums,dp));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return dfs(0,n,nums,dp);
    }
};
