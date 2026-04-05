class Solution {
public:
// int func(int n,vector<int> &dp){
//     if(n<=1) return 1;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=func(n-2,dp)+func(n-1,dp);
// }
    int climbStairs(int n) {
        int prev=1;
        int prev2=1;
        int curri=1;
        for(int i=2;i<=n;i++){
           curri=prev+prev2;
           prev2=prev;
           prev=curri;
        }
       return curri;
        
    }
};
