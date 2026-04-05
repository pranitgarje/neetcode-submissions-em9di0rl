class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<int,int> freq;
        priority_queue<int> pq;
        for(char t:tasks){
            freq[t]++ ;
        }
        for(auto f:freq){
            pq.push(f.second);
        }
        int time=0;
        queue<pair<int,int>> q;
        while(!pq.empty() || !q.empty()){
            time+=1;
            if(!pq.empty()){
                int cnt=pq.top()-1;
                pq.pop();
                if(cnt>0){
                    q.push({cnt,time+n});
                }
                
            }
            if(!q.empty() && q.front().second==time){
                pq.push(q.front().first);
                q.pop();
            }
        }
        return time;
        
    }
};
