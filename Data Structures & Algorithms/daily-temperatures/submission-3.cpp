class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n=temperatures.size();
        vector<int> res(n,0);
         for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int j=st.top();
                res[st.top()]=i-j;
                st.pop();
            }
            st.push(i);
         }
         return res;
    }
};
