class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size() ;
        int curr_max=0;
        int total=0;
        int curr_min=prices[0];
        for(int i=1;i<n;i++){
            
            if(prices[i]<prices[i-1]){
                total+=(prices[i-1]-curr_min);
                curr_min=prices[i] ;
            }
           
        }
        total+=(prices[n-1]-curr_min) ;
        return total;
    }
};