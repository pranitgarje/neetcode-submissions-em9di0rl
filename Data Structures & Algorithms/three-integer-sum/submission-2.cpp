class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       
        vector<vector<int>> res;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
           int target=0-nums[i];
           int j=i+1;
           int k=n-1;
           while(j<k){
            int curr=nums[j]+nums[k];
            if(curr<target) j++ ;
            else if(curr>target) k-- ;
            else{
               vector<int> temp;
               temp.push_back(nums[i]);
               temp.push_back(nums[j]);
               temp.push_back(nums[k]);
               res.push_back(temp);
               j++ ;
               k-- ;
               while(j<k && nums[j]==nums[j-1]){
                j++ ;
               }
            } 
            
           }
          

        }
        return res;

    }
};
