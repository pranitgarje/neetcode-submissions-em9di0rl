class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        vector<int> prefix(n+1,0);
        int ans=0;
        mpp[0]=1;
        prefix[0]=nums[0];
   
    
        for(int i=0;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            if(mpp.find(prefix[i]-k)!=mpp.end()){
                  ans+=mpp[prefix[i]-k];
            }
            mpp[prefix[i]]++ ;
        }
        return ans;
    }
};