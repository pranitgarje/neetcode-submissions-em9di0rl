class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mpp.find(temp)!=mpp.end()){
                if(mpp[temp]!=i){
                ans.push_back(i);
                ans.push_back(mpp[temp]);
                break;
                }
               
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        // O(n)
        //O(n)
    }
};
