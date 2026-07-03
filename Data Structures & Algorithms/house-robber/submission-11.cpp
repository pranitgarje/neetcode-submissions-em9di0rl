class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int next1=nums[n-1];
        int next2=0;
        for(int i=n-2;i>=0;i--){
            int temp=next1;
            next1=max(next2+nums[i],next1);
            next2=temp;

        }
       return next1 ;
        
    }
};
