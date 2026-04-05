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
        vector<int> dp(n,-1);
        return func(nums,0,n-1,dp);
        
    }
};
