class Solution {
public:
bool func(vector<int> &nums,int i,int n,vector<int> &dp){
    if(i==n) return true;
    else if(i>n || nums[i]==0) return false;
    if(dp[i]!=-1) return dp[i];
    for(int j=1;j<=nums[i];j++){
        if(func(nums,i+j,n,dp)){
            dp[i]=true;
            return true;
        }
    }
     return dp[i]=false;
     return false;
}
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        vector<bool> dp(n,false);
        dp[n-1]=true;
        for(int i=n-2;i>=0;i--){
            int end=min(n,i+nums[i]+1);
            for(int j=i+1;j<end;j++){
                if(dp[j]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[0];
    }
};
