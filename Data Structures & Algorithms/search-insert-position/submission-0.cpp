class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // search space -> All indices of the array from 0 to num
        int n=nums.size();
        int low=0;
        int high=n-1;
        if(target > nums[n-1]) return n;
        while(low < high) {
            int mid = (low + high) / 2 ;
            // feasibilty condition 
            if(nums[mid]>=target) {
                high = mid;
            }
            else {
                low = mid + 1;
            }

        }
        return low;
    }
};