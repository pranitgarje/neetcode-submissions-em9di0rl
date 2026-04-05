class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
       int l=0;
       int r=n-1;
       int maxLeft=height[l];
       int maxRight=height[r];
       int area=0;
       while(l<r){
           if(maxLeft<maxRight){
            l++ ;
            maxLeft=max(maxLeft,height[l]);
            area+=max(0,maxLeft-height[l]);
           
           }
           else{
            r-- ;
            maxRight=max(maxRight,height[r]);
            area+=max(0,maxRight-height[r]);
           
           }
       }
       return area;
    }
};
