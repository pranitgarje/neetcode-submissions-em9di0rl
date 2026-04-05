class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int product=1;
            int iszero=0;
            for(int n:nums){
                if(n!=0) product*=n;
                else iszero++ ;
               

            }
            vector<int> ans;
            
            for(int n:nums){
                if(iszero==1){
                    if(n!=0) ans.push_back(0);
                    else ans.push_back(product);
                } 
                else if (iszero>1){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(product/n);
                }
                
            }
            return ans;
    }
};
