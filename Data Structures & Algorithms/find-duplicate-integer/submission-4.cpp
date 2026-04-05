class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // This can be easily be solved a data structure like set or hashmap
        // but I should probably try to solve it in O(1) space.
       // There is a reason why the each element is in range [1,n] inclusive
       for(int i=0;i<nums.size();i++){
        int idx=abs(nums[i])-1;
        if(nums[idx]<0) return abs(nums[i]);
        nums[idx]*=-1;
       }
       return -1;
    }
};
