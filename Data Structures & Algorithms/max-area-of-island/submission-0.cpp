class Solution {
public:
void dfs(int i,int j,vector<vector<int>>& grid,int& tmp){

    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0){

        return ;

    }

    grid[i][j]=0;
    tmp+=1;

    dfs(i+1,j,grid,tmp);

    dfs(i-1,j,grid,tmp);

    dfs(i,j+1,grid,tmp);

    dfs(i,j-1,grid,tmp);



}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
          int maxArea=0;

        for(int i=0;i<grid.size();i++){

            for(int j=0;j<grid[0].size();j++){

                if(grid[i][j]==1){
                    int tmp=0;
                    dfs(i,j,grid,tmp);

                    maxArea=max(maxArea,tmp);

                }

            }

        }

        return maxArea;
    }
};
