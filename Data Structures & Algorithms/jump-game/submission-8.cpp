class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int curr_end=0;
        int farthest=0;
        for(int i=0;i<n;i++){
            farthest=max(farthest,i+nums[i]);
            if(i==curr_end){
                curr_end=farthest;
            }
        }
        return curr_end>=n-1;
        
    }
};
