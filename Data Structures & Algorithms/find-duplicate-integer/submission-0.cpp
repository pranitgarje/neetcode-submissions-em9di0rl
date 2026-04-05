class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // This can be easily be solved a data structure like set or hashmap
        // but I should probably try to solve it in O(1) space.
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
        // O(NLOGN),O(N)
    }
};
