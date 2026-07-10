class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> curr;
        for(auto& trip:trips){
            if(trip[0]>capacity) return false;
            curr.push({trip[1],trip[2],trip[0]});
        }
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> prev ;

        int curr_cap=0;
        while(!curr.empty()){
             
             while(!prev.empty() && prev.top().first<=curr.top()[0]){
                curr_cap-=prev.top().second;
                prev.pop();
             }
             curr_cap+=curr.top()[2] ;
             if(curr_cap>capacity) return false;
             prev.push({curr.top()[1],curr.top()[2]}) ;
             curr.pop();

                

        }
        return true;
    }
};