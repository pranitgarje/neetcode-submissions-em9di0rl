class Solution {
public:
int offset=20000 ;
int func(int i,int val,int target,vector<int> &nums,vector<vector<int>> &dp){
    if(i==nums.size()){
        if(val==target) return 1;
        else return 0;
    }

    if(dp[i][val+offset]!=-1) return dp[i][val+offset] ;
    int sub=func(i+1,val-nums[i],target,nums,dp);
    int add=func(i+1,val+nums[i],target,nums,dp);
    return dp[i][val+offset]=sub+add ;
    
    
}
    int findTargetSumWays(vector<int>& nums, int target) {
       int n=nums.size();
       vector<vector<int>> dp(n,vector<int>(40000,-1));
        return func(0,0,target,nums,dp);
        
    }
};
