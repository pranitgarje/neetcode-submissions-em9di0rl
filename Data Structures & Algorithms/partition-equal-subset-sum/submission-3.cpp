class Solution {
public:

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
          vector<vector<bool>> dp(n+1,vector<bool>(capacity+1,false));  // Space O(N*capacity)
         for(int i=0;i<=n;i++){
            dp[i][0]=true;
         }
         for(int i=1;i<=n;i++){            //O(N*Capacity)
            for(int j=1;j<=capacity;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]]; 
                }
                else{
                     dp[i][j]=dp[i-1][j];
                }
            }
         }
         return dp[n][capacity];
    }
};
