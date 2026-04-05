class Solution {
public:
int func(int i,vector<int> &cost,vector<int> &dp){
    if(i>=cost.size()) return 0;
    // memoization
    if(dp[i]!=-1) return dp[i];
    return dp[i]=cost[i]+min(func(i+1,cost,dp),func(i+2,cost,dp));
   

}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return min(func(0,cost,dp),func(1,cost,dp));
        
    }
};
