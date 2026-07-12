class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq1;
        for(auto t:trips){
            if(t[0]>capacity) return false;
            pq1.push({t[1],t[2],t[0]});
        }
        // Until all trips have been processed
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq2;
         int curr_cap=0;
        while(!pq1.empty()){
            while(!pq2.empty() && pq2.top().first<=pq1.top()[0]){
                curr_cap-=pq2.top().second;
                pq2.pop() ;         
            }
            curr_cap+=pq1.top()[2] ;
            if(curr_cap>capacity) return false;
            pq2.push({pq1.top()[1],pq1.top()[2]}) ;
            pq1.pop() ;

        }
        return true;
    }
};