class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size() ;
        int m=board[0].size();
        vector<vector<bool>> marked(n,vector<bool>(m,false));
        queue<pair<int,int>> q;
        for(int j=0;j<m;j++){
            if(board[0][j]=='O'){
                q.push({0,j});
                marked[0][j]=true ;
            }
            if(board[n-1][j]=='O'){
                q.push({n-1,j});
                marked[n-1][j]=true;
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                marked[i][0]=true ;
            }
            if(board[i][m-1]=='O'){
                q.push({i,m-1});
                marked[i][m-1]=true;
            }
        }

        vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}} ;
         while(!q.empty()){
            
                 auto [r,c]=q.front();
                 q.pop();
                 for(auto &[dr,dc]:dir){
                     int nr=r+dr;
                     int nc=c+dc;
                     if(nr>=0 && nr<n && nc>=0 && nc<m && board[nr][nc]=='O' && !marked[nr][nc]){
                         
                             marked[nr][nc]=true;
                             q.push({nr,nc}) ;
                         
                     
                 }
             }
         }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !marked[i][j]){
                    board[i][j]='X';
                }
            }
         }
    }
};