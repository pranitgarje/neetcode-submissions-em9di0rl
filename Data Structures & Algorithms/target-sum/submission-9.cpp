class Solution {
public:

    int findTargetSumWays(vector<int>& nums, int target) {
         int sum = 0, zeroCount = 0;
        vector<int> arr;

        for (int x : nums) {
            if (x == 0) zeroCount++;
            else {
                arr.push_back(x);
                sum += x;
            }
        }
        if((sum+target)%2==1) return 0;
        if(abs(target)>sum) return 0;
        int cap=(sum+target)/2;
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(cap+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){         //O(N*M)
            for(int j=1;j<=cap;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][cap]*(1<<zeroCount);
    }
};
