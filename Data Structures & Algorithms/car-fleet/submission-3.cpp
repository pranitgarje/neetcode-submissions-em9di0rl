class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
          /**Why is it even a monotonic stack?
            ans:Because it popping the cars who joined the fleet? the car might join the the fleet late and might have to go first*/
             int n=position.size();
            stack<double> st;
            vector<pair<int,double>> cars;
           
            for(int i=0;i<n;i++){
               double time=(double)(target-position[i])/speed[i];
               cars.push_back({position[i],time});
            }
            sort(cars.rbegin(),cars.rend());
            for(auto c:cars){
               double curr=c.second;
               if(st.empty() || curr>st.top()){
                st.push(curr);
               }
            }
            return st.size();
            

    }
};
