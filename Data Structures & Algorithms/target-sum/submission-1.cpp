class Solution {
public:
int func(int i,vector<int> &nums,int curr,int target){
if(i==nums.size()){
    return curr==target?1:0;
}
int plus=func(i+1,nums,curr+nums[i],target);
int minus=func(i+1,nums,curr-nums[i],target);
return plus+minus;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        return func(0,nums,0,target);
    }
};
