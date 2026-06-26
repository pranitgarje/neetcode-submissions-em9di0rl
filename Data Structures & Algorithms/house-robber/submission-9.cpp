class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==2) return max(nums[0],nums[1]);
        if(n==1) return nums[0];
        if(n==0) return 0;
        int two=nums[0];
        int one=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
           int temp=one;
           one=max(nums[i]+two,one);
           two=temp;
        }
        return one;
      
        
    }
};
