class Solution {
public:
int rec(int i,int j,int m,int n){
    if(i>=m-1 && j>=n-1) return 1;
    int ans=0;
    if(i==m-1 && j<n-1){
        return rec(i,j+1,m,n);
    } 
    if(i<m-1 && j==n-1){
        return rec(i+1,j,m,n);
    }
    
      else{
                   ans+=rec(i,j+1,m,n);
                    ans+=rec(i+1,j,m,n);
      }

    
    return ans;
}
    int uniquePaths(int m, int n) {
        return rec(0,0,m,n);
        
    }
};
