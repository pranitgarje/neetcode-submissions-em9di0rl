class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
            vector<pair<int,double>> cars;
            int n=position.size();
            for(int i=0;i<n;i++){
                double time=(double)(target-position[i])/speed[i];
                cars.push_back({position[i],time});
            }
             sort(cars.begin(),cars.end());
              reverse(cars.begin(),cars.end());
             stack<double> st;
             for(auto car:cars){
                if(st.empty() || car.second>st.top()){
                    st.push(car.second);
                }
             }
             return st.size();
    }
};
