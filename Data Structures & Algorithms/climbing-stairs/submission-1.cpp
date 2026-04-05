class Solution {
public:
int func(int n){
    if(n<=1) return 1;
    return func(n-2)+func(n-1);
}
    int climbStairs(int n) {
        int ans=func(n);
        return ans;
        
    }
};
