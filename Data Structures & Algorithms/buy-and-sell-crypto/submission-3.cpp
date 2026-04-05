class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        vector<int> minLeft(n,0);
        minLeft[0]=prices[0];
        for(int i=1;i<n;i++){
            minLeft[i]=min(minLeft[i-1],prices[i]);
        }
         for(int i=n-1;i>=0;i--){
            maxProfit=max(maxProfit,prices[i]-minLeft[i]);
         }
        return maxProfit;
    }
};
