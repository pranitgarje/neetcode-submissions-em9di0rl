class Solution {
public:
vector<int> nse(vector<int>& heights){
    stack<int> st;
    int n=heights.size();
    vector<int> res(n,n);
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[i]<heights[st.top()]){
            int index=st.top();
            st.pop();
            res[index]=i;
        }
        st.push(i);
    }
    return res;
}
vector<int> pse(vector<int>& heights){
    stack<int> st;
    int n=heights.size();
    vector<int> res(n,-1);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[i]<heights[st.top()]){
            int index=st.top();
            st.pop();
            res[index]=i;
        }
        st.push(i);
    }
    return res;
}
    int largestRectangleArea(vector<int>& heights) {

         vector<int> prev=pse(heights);
         vector<int> next=nse(heights);
         int n=heights.size();
         if(n==1){
            return heights[0];
         }
         int maxArea=0;
         for(int i=0;i<n;i++){
             int width=next[i]-prev[i]-1;    
             int area=width*heights[i];
             maxArea=max(maxArea,area);
         }
         return maxArea;
    }
};
