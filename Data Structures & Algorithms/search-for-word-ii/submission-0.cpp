
class TrieNode {
public:
    unordered_map<char,TrieNode*> children;
    bool isWord;
    TrieNode():isWord(false){};
    void addWord(string word){
        TrieNode* curr=this;
        for(char c:word){
            if(!curr->children.count(c)){
                curr->children[c]=new TrieNode();
               
            }
             curr=curr->children[c];        
        }
        curr->isWord=true;
      
    }
};
class Solution {
    unordered_set<string> res;
    vector<vector<bool>> visit;
private:
void dfs(int r,int c,vector<vector<char>>& board,TrieNode* node,string word){
    int n=board.size();
    int m=board[0].size();
    if(r<0 || c<0 || r>=n || c>=m || visit[r][c] || !node->children.count(board[r][c])){
        return ;
    }
    visit[r][c]=true;
    node=node->children[board[r][c]];
    word+=board[r][c];
    if(node->isWord){
        res.insert(word);
    }
    dfs(r+1,c,board,node,word);
    dfs(r-1,c,board,node,word);
    dfs(r,c-1,board,node,word);
    dfs(r,c+1,board,node,word);
    visit[r][c]=false;

}
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root=new TrieNode();
        for(string word:words){
            root->addWord(word);
        }
        int n=board.size();
        int m=board[0].size();
        visit.assign(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(i,j,board,root,"");
            }
        }
        return vector<string>(res.begin(),res.end());
        
    }
};
