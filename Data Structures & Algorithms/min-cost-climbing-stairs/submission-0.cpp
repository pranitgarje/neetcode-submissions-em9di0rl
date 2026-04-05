class Solution {
public:
int func(int i,vector<int> &cost,int c){
    if(i>cost.size()){
          return c;
    }
    c+=cost[i];
    int lc=func(i+1,cost,c);
    
    int rc=func(i+2,cost,c);
     return min(lc,rc);

}
    int minCostClimbingStairs(vector<int>& cost) {
        return min(func(0,cost,0),func(1,cost,0));
        
    }
};
