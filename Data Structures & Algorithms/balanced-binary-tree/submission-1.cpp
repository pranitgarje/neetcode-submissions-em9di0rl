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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh=gh(root->left);
        int rh=gh(root->right);
        if(abs(lh-rh)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
