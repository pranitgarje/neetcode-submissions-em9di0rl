class TrieNode{
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
class PrefixTree {
    TrieNode* root;
public:
    PrefixTree() {
        root=new TrieNode('\0');
    }
    void insertUtil(TrieNode* root,string word,int i,int n){
        if(i==n){
            root->isTerminal=true;
            return ;
        }
        int index=word[i]-'a';
        TrieNode* child;
        if(root->children[index]!=NULL){
              child=root->children[index];
        }
        else{
            child=new TrieNode(word[i]);
            root->children[index]=child;
        }
        insertUtil(child,word,i+1,n);
    }
    void insert(string word) {
        int n=word.size();
        return insertUtil(root,word,0,n);
    }
     bool searchUtil(TrieNode* root,string word,int i,int n){
        if(i==n){
            return root->isTerminal;
        }
        int index=word[i]-'a';
        TrieNode* child;
        if(root->children[index]!=NULL){
              child=root->children[index];
              return searchUtil(child,word,i+1,n);
               
        }
      return false;
       
    } 
    bool search(string word) {
         int n=word.size();
         return searchUtil(root,word,0,n);

    }
    bool prefixUtil(TrieNode* root,string word,int i,int n){
        if(i==n){
            return true;
        }
        int index=word[i]-'a';
        TrieNode* child;
        if(root->children[index]!=NULL){
              child=root->children[index];
              return prefixUtil(child,word,i+1,n);
               
        }
      return false;
       
    } 
    bool startsWith(string prefix) {
        int n=prefix.size();
        return prefixUtil(root,prefix,0,n);
    }
};
