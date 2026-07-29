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
int pathSum(TreeNode* root, int &maxSum){
    if(root==NULL) return 0;
    int left=pathSum(root->left,maxSum);
    int right=pathSum(root->right,maxSum);
    int currSum=max(left,0)+max(right,0)+root->val ;
    maxSum=max(maxSum,currSum);
    return root->val+max(0,max(left,right)) ;
}
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        pathSum(root,maxSum);
        return maxSum;
    }
};
