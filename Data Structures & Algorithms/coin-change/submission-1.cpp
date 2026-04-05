class Solution {
public:
int func(vector<int> &coins,int amount,vector<int>& dp){
if(amount==0) return 0;
int ans=1e9;
if(dp[amount]!=-1) return dp[amount];
for(int coin:coins){
    if(amount-coin>=0){
        ans=min(ans,1+func(coins,amount-coin,dp));
    }
}
return dp[amount]=ans;
 

}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(amount+1,-1);
        
        int ans=func(coins,amount,dp);
        return ans>=1e9?-1:ans;
        
        
        
    }
};
