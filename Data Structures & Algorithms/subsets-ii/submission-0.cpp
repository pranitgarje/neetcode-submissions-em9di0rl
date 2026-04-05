class Solution {
public:
vector<vector<int>> res;
void backTrack(vector<int>& nums,int i,vector<int> &cur){
     if(i>=nums.size()){
        res.push_back(cur);
        return ;
     }
        cur.push_back(nums[i]);
        backTrack(nums,i+1,cur);
        cur.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++ ;
        backTrack(nums,i+1,cur);
     
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        vector<int> cur;
        backTrack(nums,0,cur);
        return res;
        
    }
};
