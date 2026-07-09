class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size() ;
        int max_profit=0;
        int curr=prices[0] ;
        int ans=0;
        for(int i=1;i<=n;i++){
            if(i==n){
                ans+=max_profit ;
            }
            else if(prices[i]<=prices[i-1]){
                curr=prices[i] ;
                ans+=max_profit;
                max_profit=0;
            } 
            else {
                max_profit=max(max_profit,prices[i]-curr) ;
            }
        }
        return ans;
    }
};