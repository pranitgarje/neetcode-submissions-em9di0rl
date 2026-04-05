class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int l=1;
        int r=piles[n-1];
        int ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            int hours=0;
            for(int j=0;j<n;j++){
                hours+=(piles[j]+mid-1)/mid;
            }
            if(hours<=h){
                r=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
