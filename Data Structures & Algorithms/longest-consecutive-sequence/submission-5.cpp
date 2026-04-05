class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=0){
            return 0;
        }
       set<int> s(nums.begin(),nums.end());
       int maxSeq=1;
       for(int a:nums){
            int t=a+1;
            int cnt=1;
            if(!s.count(a-1)){
                while(s.count(t)){
                t+=1;
                cnt++ ;
            }
            }
           
            maxSeq=max(maxSeq,cnt);
       }

       return maxSeq;
    }
};
