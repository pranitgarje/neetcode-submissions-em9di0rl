class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int curr_max=1;
        int curr_min=1;
        int res=nums[0];
        for(int n:nums){
            int tmp=curr_max*n;;
            curr_max=max(curr_max*n,max(n,curr_min*n));
            curr_min=min(tmp,min(n,curr_min*n));
            res=max(res,curr_max);
        }
        return res;
    }
};
