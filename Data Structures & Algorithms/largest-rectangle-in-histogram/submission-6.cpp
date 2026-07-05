class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<pair<int,int>> st;
        int max_area=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=heights[i]){
                int h=st.top().first;
                st.pop();
                int left=-1;
                if(!st.empty()){
                    left=st.top().second;
                }
                int w=i-left-1;
                int a=h*w;
                max_area=max(max_area,a);
            }
            st.push({heights[i],i});

        }
        while(!st.empty()){
            int h=st.top().first;
            st.pop();
            int left=-1;
            if(!st.empty()){
                    left=st.top().second;
            }

            int w = n-left-1;
             max_area=max(max_area,h*w);
        }
        return max_area;
        
    }
};
