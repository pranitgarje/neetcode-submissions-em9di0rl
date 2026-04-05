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
TreeNode* dfs(vector<int> &preorder,unordered_map<int,int> &mpp,int &i,int l, int r){
    if(l>r) return nullptr;
    TreeNode* node=new TreeNode(preorder[i]);
    int m=mpp[preorder[i]];
    i+=1;
    node->left=dfs(preorder,mpp,i,l,m-1);
    node->right=dfs(preorder,mpp,i,m+1,r);
    return node;


}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mpp;
        int n=preorder.size();
        int i=0;
        for(int j=0;j<n;j++){
        mpp[inorder[j]]=j;
        }
        return dfs(preorder,mpp,i,0,n-1);
    }
};
