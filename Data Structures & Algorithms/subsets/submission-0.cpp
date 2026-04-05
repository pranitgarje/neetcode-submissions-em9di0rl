class Solution{
public:
set<vector<int>> st;
void backTrack(vector<int>& nums,int i,vector<int> &temp){
    if(i>=nums.size()){
        st.insert(temp);
        return;
    }
    temp.push_back(nums[i]);
    backTrack(nums,i+1,temp);
    temp.pop_back();
    backTrack(nums,i+1,temp);

}
    vector<vector<int>> subsets(vector<int>& nums) {
           vector<int> temp;
           backTrack(nums,0,temp);
           vector<vector<int>> ans;
           for(auto v:st){
             ans.push_back(v);
           }
           return ans;
    }
    //O(N!) Not efficient , must be optimzed with dp;
};
