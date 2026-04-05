class KthLargest {
public:
int s;
priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        s=k;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        if(pq.size()<s){
            pq.push(val);
        }
        else if(val>pq.top()){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};
