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
int gh(TreeNode* root){
    if(!root) return 0;
    return max(gh(root->left),gh(root->right))+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int lh=gh(root->left);
        int rh=gh(root->right);
        int sub=max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max(lh+rh,sub);
    }
};
