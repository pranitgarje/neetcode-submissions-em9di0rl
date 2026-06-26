class Solution {
public:
int helper(vector<int> &nums){
    int n=nums.size();
    if(n==1) return nums[0];
    if(n<1) return 0;
    int rob1=nums[0];
    int rob2=max(nums[0],nums[1]);
    for(int i=2;i<n;i++){
        int temp=max(nums[i]+rob1,rob2);
        rob1=rob2;
        rob2=temp;
    }
    return rob2;
}
    int rob(vector<int>& nums) {
        vector<int> nums1(nums.begin()+1,nums.end());
        vector<int> nums2(nums.begin(),nums.end()-1);
        return max(nums[0],max(helper(nums1),helper(nums2)));

        
    }
};
