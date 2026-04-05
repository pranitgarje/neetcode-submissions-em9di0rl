class Solution {
public:
vector<vector<string>> res;
void func(int r,int n,set<int> &col,set<int> &pos,set<int> &neg,vector<string> &board){
if(r==n){
    res.push_back(board);
    return ;
}
for(int c=0;c<n;c++){
    if(col.count(c) || pos.count(r+c) || neg.count(r-c)){
        continue;
    }
    col.insert(c);
    pos.insert(r+c);
    neg.insert(r-c);
    board[r][c]='Q';
    func(r+1,n,col,pos,neg,board);
    col.erase(c);
    pos.erase(r+c);
    neg.erase(r-c);
    board[r][c]='.';

}
}
    vector<vector<string>> solveNQueens(int n) {
        if(n==1){
           return {{"Q"}} ;
        }
        set<int> col;
        set<int> pos;
        set<int> neg;
        vector<string> board(n);
        for(int i=0;i<n;i++){
           board[i] = string(n, '.');
        }
        func(0,n,col,pos,neg,board);
        return res;
    }
};
