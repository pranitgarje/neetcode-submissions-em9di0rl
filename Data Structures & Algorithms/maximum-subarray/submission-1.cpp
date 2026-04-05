class Solution {
public:
    int maxSubArray(vector<int>& nums) {
           // Method 1:Kadane's Algorithm
           int sum=0;            // Local sum
           int maxSum=INT_MIN;   // Global Maximum Sum
           for(int i=0;i<nums.size();i++){
               sum+=nums[i];
               maxSum=max(maxSum,sum);      
               if(sum<0){
                sum=0;
               }
           }
           return maxSum;

           // Time Complexity:O(n)
           // SC:O(n)
    }
};
