/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int count=0;
bool check(vector<int> temp,int v){
    for(int i=0;i<temp.size();i++){
        if(temp[i]>v) return false;
    }
    return true;
}
void dfs(TreeNode* root,vector<int>& temp){
    if(!root) return ;
    if(check(temp,root->val)) count++ ;
    temp.push_back(root->val);
    dfs(root->left,temp);
    dfs(root->right,temp);
    temp.pop_back();
}
    int goodNodes(TreeNode* root) {
        vector<int> temp;
        dfs(root,temp);
        return count;
    }
};
