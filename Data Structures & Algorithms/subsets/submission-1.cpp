class Solution{
public:
vector<vector<int>> st;
void backTrack(vector<int>& nums,int i,vector<int> &temp){
    if(i>=nums.size()){
        st.push_back(temp);
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
           
           
           return st;
    }
    //O(N!) Not efficient , must be optimzed with dp;
    /*what is my state here? what is that I am doing repitatively*/
};
