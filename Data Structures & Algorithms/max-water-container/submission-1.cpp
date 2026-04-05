class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int area=INT_MIN;
        while(l<r){
            int width=r-l;
            int height=min(heights[l],heights[r]);
            area=max(area,width*height);
            if(heights[l]<heights[r]) l++ ;
            else r-- ;

        }
       return area;
    }
};
