class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return n;
        }
        int maxLen=INT_MIN;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int temp=nums[i]+1;
            int len=1;
            while(mpp.find(temp)!=mpp.end()){
                       len++ ;
                       temp++ ;
                
            }
            maxLen=max(len,maxLen);
        }
        return maxLen ;
        
    }
};
