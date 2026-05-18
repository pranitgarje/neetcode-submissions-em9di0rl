class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_area=0;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(j<n){
              int h=min(heights[i],heights[j]);
              int w=j-i;
              int a=h*w;
              max_area=max(max_area,a);
              j++ ;
            }
        }
        return max_area;
    }
};
