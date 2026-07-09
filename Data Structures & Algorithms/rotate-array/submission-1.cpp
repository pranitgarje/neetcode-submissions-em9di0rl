class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int n_partitions=k%n;
        if(n_partitions<1) return ;
        int p_start=k%n;
       int i=0;
       vector<int> v(n);
       while(i<p_start){
            v[(p_start+i)%n]=nums[i];
            i++ ;
       }
        int la=p_start+i ;
        for(int j=p_start;j<n;j++){
            v[la%n]=nums[j];
            la++ ;
        }
        for(int i=0;i<n;i++){
            nums[i]=v[i] ;
        }

    }
};