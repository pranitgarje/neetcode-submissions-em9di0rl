class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int l=0;
      int maxProfit=0;
      for(int r=1;r<n;r++){
        if(prices[l]>prices[r]) l=r;
        else{
            int profit=prices[r]-prices[l];
            maxProfit=max(maxProfit,profit);
        }
      }

      return maxProfit;
    }
};
