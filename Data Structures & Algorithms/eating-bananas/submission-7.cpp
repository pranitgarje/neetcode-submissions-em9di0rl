class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int l=1;
        int r=piles[n-1];
        while(l<r){
            int k=(l+r)/2;
            int req_h=0;
            for(int p:piles){
                req_h+=((p+(k-1))/k);
            }
            if(req_h<=h){
                r=k;
            }
            else{
                l=k+1;
            }
        }
        return l;
        
    }
};
