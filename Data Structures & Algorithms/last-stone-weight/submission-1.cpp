class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>> pq; 
        for(int i=0;i<stones.size();i++){         //O(N)
            pq.push(stones[i]);     //O(LOGN)
        }
        while(pq.size()>1){
            int x=pq.top();           //O(NLOGN)
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x<y){
                pq.push(y-x);
            }
            else if(y<x){
                pq.push(x-y);
            }
          
           
        }
        if(pq.size()==1) return pq.top();
        else return 0;

        // Time complexity:O(NLOGN)
    }
};
