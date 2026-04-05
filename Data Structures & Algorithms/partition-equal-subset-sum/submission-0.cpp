class Solution {
public:
int func(int i,vector<int>&nums,int capacity){
    if(capacity==0) return true;
    if(i>=nums.size()) return false;
    bool skip=func(i+1,nums,capacity);
    bool take=func(i+1,nums,capacity-nums[i]);
    return  skip || take;
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        
         for(int n:nums){
             sum+=n;
         }
         if(sum%2==1){
            return false;
         }
         int capacity=sum/2;
         return func(0,nums,capacity);
    }
};
