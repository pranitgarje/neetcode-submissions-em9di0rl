class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       sort(piles.begin(),piles.end());
       int n=piles.size();
        int l=1;
        int r=piles[n-1];
        int ans;
        while(l<=r){
            int k=l+(r-l)/2;
            int hours=0;
            for(int p:piles){
                hours+=(p+k-1)/k;
            }
            if(hours<=h){
                ans=k;
                r=k-1;
            }
            else{
                l=k+1;
            }
        }
        return ans;
    }
};
