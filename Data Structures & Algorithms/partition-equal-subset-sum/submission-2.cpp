class Solution {
public:
int func(int i,vector<int>&nums,vector<vector<int>> &dp,int capacity){
  if(i==nums.size()) return capacity==0;
  if(capacity<0) return false;
    if(dp[i][capacity]!=-1) return dp[i][capacity];
    bool skip=func(i+1,nums,dp,capacity);
    bool take=func(i+1,nums,dp,capacity-nums[i]);
    return dp[i][capacity]= skip || take;
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        
         for(int n:nums){
             sum+=n;
         }
         if(sum%2==1){
            return false;
         }
         int n=nums.size();
        
         int capacity=sum/2;
          vector<vector<int>> dp(n,vector<int>(capacity+1,-1));
         return func(0,nums,dp,capacity);
    }
};
