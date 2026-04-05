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
class WordDictionary {
    TrieNode* root;
public:
    WordDictionary() {
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
    void addWord(string word) {
        int n=word.size();
        return insertUtil(root,word,0,n);
    }
     bool searchUtil(TrieNode* root,string word,int i,int n){
        if(i==n){
            return root->isTerminal;
        }
        
       int index=word[i]-'a';
        TrieNode* child;
        if(word[i]=='.'){
            for(int j=0;j<26;j++){
            if(root->children[j]!=NULL){
                child=root->children[j];
                if(searchUtil(child,word,i+1,n)){
                    return true;
                }

            
            }
            else {
                continue;
            } 
        }
        return false;
        }
         
        else if(root->children[index]!=NULL){
              child=root->children[index];
              return searchUtil(child,word,i+1,n);
               
        }
      else{
             return false;
      } 
       
    } 
    bool search(string word) {
        int n=word.size();
        return searchUtil(root,word,0,n);
    }
};
