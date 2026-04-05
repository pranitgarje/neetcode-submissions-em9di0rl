class Solution {
public:
int func(vector<int>& nums,int target,int l,int r){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]>target){
        return func(nums,target,l,mid-1);
    }
    else{
        return func(nums,target,mid+1,r);
    }
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return func(nums,target,0,n-1);

        
    }
};
