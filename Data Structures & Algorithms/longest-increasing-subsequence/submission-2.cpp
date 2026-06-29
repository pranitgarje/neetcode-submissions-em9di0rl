class Solution {
public:
int dfs(int n,int i,int j,vector<int> &nums,vector<vector<int>> &dp){
    // base case:
    if(i==n) return 0;
    if(dp[i][j+1]!=-1) return dp[i][j+1];
    int LIS=dfs(n,i+1,j,nums,dp);    // Not include
    if(j==-1 || nums[i] > nums[j]) {
        LIS=max(LIS,1+dfs(n,i+1,i,nums,dp))  ;        //include
    }
    return dp[i][j+1]=LIS;
   
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return dfs(n,0,-1,nums,dp);

        
    }
};
