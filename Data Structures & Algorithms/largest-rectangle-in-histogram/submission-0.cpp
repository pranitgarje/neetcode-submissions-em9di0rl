class Solution {
public:
 vector<int> nsl(vector<int>& heights) {
        int n=heights.size();
        vector<int> result(n,n);
        stack<int> st;   
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int index=st.top();
                st.pop();
                result[index]=i;
            }
            st.push(i);
        }
        return result;
    }
  vector<int> psl(vector<int>& heights) {
        int n=heights.size();
        vector<int> result(n,-1);
        stack<int> st;   
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int index=st.top();
                st.pop();
                result[index]=i;
            }
            st.push(i);
        }
        return result;
    }
    int largestRectangleArea(vector<int>& heights) {
       vector<int> prev=psl(heights);
       vector<int> next=nsl(heights);
       int n=heights.size();
       int maxArea=INT_MIN;
       int width;
       for(int i=0;i<n;i++){
           
            
                width=next[i]-prev[i]-1;
            
            int area=heights[i]*width;
            maxArea=max(area,maxArea);
       }
       return maxArea;
    }
};
