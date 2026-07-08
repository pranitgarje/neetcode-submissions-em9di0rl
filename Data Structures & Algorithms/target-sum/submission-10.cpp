class Solution {
public:
int func(int i,int val,int target,vector<int> &nums){
    if(i==nums.size()){
        if(val==target) return 1;
        else return 0;
    }
    int sub=func(i+1,val-nums[i],target,nums);
    int add=func(i+1,val+nums[i],target,nums);
    return sub+add ;
    
    
}
    int findTargetSumWays(vector<int>& nums, int target) {
      
        return func(0,0,target,nums);
        
    }
};
