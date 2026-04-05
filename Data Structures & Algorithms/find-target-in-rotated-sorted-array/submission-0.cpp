class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        
        while(l<r){
          int mid=l+(r-l)/2;
          if(nums[mid]>nums[r]){
             l=mid+1;
          }
          else{
             r=mid;
          }
         
        }
        int pivot=l;
        int res=binarySearch(nums,target,0,pivot-1);
        if(res!=-1){
            return res;
        }
        return res=binarySearch(nums,target,pivot,n-1);
        
    }
};
