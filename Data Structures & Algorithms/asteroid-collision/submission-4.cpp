class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<n;i++){
            bool alive=true;
            while(!st.empty() && alive && asteroids[i]<0 && st.top()>=0){
                if(abs(asteroids[i])>st.top()){
                    st.pop();
                }
                else if(abs(asteroids[i])<st.top()){
                    alive=false;
                }
                else{
                    st.pop();
                    alive=false;
                }

            }
            if(alive){
                st.push(asteroids[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};