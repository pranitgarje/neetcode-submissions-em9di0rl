class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums;
        }
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int cnt=1;
       
        for(int i=1;i<n;i++){
             if(cnt==n/3+1){
                ans.push_back(nums[i-1]);
            }
            if(nums[i]==nums[i-1]){
                cnt++ ;
            }
            else{
                cnt=1;
            }
           
        }
        if(cnt==n/3+1) ans.push_back(nums[n-1]);
        return ans;
    }
};