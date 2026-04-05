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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
        queue<TreeNode*> q;
        q.push(root);
        string res=to_string(root->val)+",";
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left){
                    res+=to_string(curr->left->val)+",";
                    q.push(curr->left);
                } 
                else{
                    res+="X,";
                }
                
                if(curr->right){
                    res+=to_string(curr->right->val)+",";
                    q.push(curr->right);
                } 
                else{
                    res+="X,";
                }
            }


        }
        return res;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        if(data.empty()) return nullptr;
        vector<string> tokens;
        stringstream ss(data);
        string token;

        while (getline(ss, token, ',')) {
             if (!token.empty())
            tokens.push_back(token);
        }
        TreeNode* root=new TreeNode(stoi(tokens[0]));
        int i=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            if(tokens[2*i+1]!="X"){
                f->left=new TreeNode(stoi(tokens[2*i+1]));
                  q.push(f->left);
            }
            else{
                f->left=nullptr;
            }
            if(tokens[2*i+2]!="X"){
                 f->right=new TreeNode(stoi(tokens[2*i+2]));
                 q.push(f->right);
            }
            else{
                f->right=nullptr;
            }
              i++ ;     
        }
        return root;

    }
};
