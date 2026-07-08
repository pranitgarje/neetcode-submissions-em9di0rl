class Solution {
public:

    int findTargetSumWays(vector<int>& nums, int target) {
       int n=nums.size();
       int sum=accumulate(nums.begin(),nums.end(),0);
        if (abs(target) > sum){
              return 0;
        }
          
       int offset=sum ;
       vector<vector<int>> dp(n+1,vector<int>(2*sum+1,0));
       dp[0][offset]=1;
       for(int i=0;i<n;i++){
        for(int val=-sum;val<=sum;val++){
            int ways=dp[i][val+offset];
            if(ways==0) continue;
            dp[i+1][val+nums[i]+offset]+=ways;
            dp[i+1][val-nums[i]+offset]+=ways;
        }
       }
    return dp[n][target+offset] ;
       
        
    }
};
