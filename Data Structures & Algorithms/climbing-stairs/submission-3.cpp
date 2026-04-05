class Solution {
public:
// int func(int n,vector<int> &dp){
//     if(n<=1) return 1;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=func(n-2,dp)+func(n-1,dp);
// }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-2]+dp[i-1];
        }
       return dp[n];
        
    }
};
