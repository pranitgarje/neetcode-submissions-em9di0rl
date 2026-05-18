class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_area=0;
        int l=0;
        int r=n-1;
        while(l<r){
            int a=min(heights[l],heights[r])*(r-l);
            max_area=max(max_area,a);
            if(heights[l]<=heights[r]){
                l++ ;
            }
            else{
                r-- ;
            }
        }
        return max_area;
    }
};
