class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) {
            return nums[0] ;
        }
        int next1=0;
        int next2=0;
        for(int i=n-1;i>0;i--){
            int temp=next1;
            next1=max(next2+nums[i],next1);
            next2=temp;

        }
        int skip_first=next1;
        next1=0;
        next2=0;
        for(int i=n-2;i>=0;i--){
            int temp=next1;
            next1=max(next2+nums[i],next1);
            next2=temp;

        }
        int skip_last=next1;
        return max(skip_first,skip_last);

    }
};
