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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if(!root){
        return nullptr;
       }
    //     if((p->val<root->val && q->val>root->val) || (p->val>root->val && q->val<root->val)){
    //         return root;
    //     }
    //     else if(p->val>root->val && q->val>root->val){
    //         return lowestCommonAncestor(root->right,p,q);
    //     }
    //     else if(p->val<root->val && q->val<root->val){
    //         return lowestCommonAncestor(root->left,p,q);
    //     }
    //    else{
    //     return root;
    //    }
       stack<TreeNode*> st;
       st.push(root);
       while(!st.empty()){
        TreeNode* cur=st.top();
        st.pop();
        if((p->val<cur->val && q->val>cur->val) || (p->val>cur->val && q->val<cur->val)){
            return cur;
         }
          else if(p->val>cur->val && q->val>cur->val){
             st.push(cur->right);
         }
         else if(p->val<cur->val && q->val<cur->val){
            st.push(cur->left);
        }
        else{
            return cur;
        }

       }
      return nullptr;
        
    }
};
