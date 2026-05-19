class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
        int n=nums.size();
        unordered_set<int> s;
        for(int r=0;r<n;r++){
            if(r-l>k){
                s.erase(nums[l]);
                l++ ;
            }
            if(s.count(nums[r])) return true;
            s.insert(nums[r]);
            
            
        }
        return false;
    }
};