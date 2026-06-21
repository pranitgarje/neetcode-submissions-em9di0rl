class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,float>> pt ;
        for(int i=0;i<n;i++){
            float time=(float)(target-position[i])/ (float) speed[i] ; 
            pt.push_back({position[i],time});
        }
        sort(pt.begin(),pt.end());
        stack<pair<int,float>> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && pt[i].second >= st.top().second){
                st.pop();
            }
            st.push(pt[i]);
        }
        return st.size();
    }
};
