class Solution {
public:
int func(int i,int n,vector<int> &nums,vector<int> &dp){
    if(i>=n) return 0;
    if(nums[i]==0) return 1;
    if(dp[i]!=-1) return dp[i];
    int minJumps=INT_MAX;
    for(int j=1;j<=nums[i];j++){
        int ans=0;
        ans=1+func(i+j,n,nums,dp);
        minJumps=min(minJumps,ans);
    }
    return dp[i]=minJumps;
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return func(0,nums.size()-1,nums,dp);
        
    }
};
