class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        ans.push_back(pq.top().first);
        for(int r=k;r<n;r++){
            pq.push({nums[r],r});
            while(pq.top().second<=r-k){
                pq.pop();
            }
            ans.push_back(pq.top().first);
        }

        return ans;
        
    }
};
