class Solution {
public:
int sum(vector<int> arr){
    int sum=0;
    for(int a:arr){
        sum+=a;
    }
    return sum;
}
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int res=0;
        int total=0;
        int n=gas.size();
         int sum_gas=sum(gas);
         int sum_cost=sum(cost);
         if(sum_gas<sum_cost){
            return -1;
         }
        if(sum_gas<sum_cost) return -1;
        for(int i=0;i<gas.size();i++){
              total+=(gas[i]-cost[i]);
              if(total<0){
                total=0;
                res=i+1;
              }
        }
        return res;
        
    }
};
