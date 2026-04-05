class Solution {
public:
bool func(vector<int> &nums,int i,int n){
    if(i==n) return true;
    else if(i>n) return false;
    if(i<n && nums[i]==0) return 0;
    for(int j=1;j<=nums[i];j++){
        if(func(nums,i+j,n)) return true;
    }
    return false;
}
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        return func(nums,0,n-1);
        
    }
};
