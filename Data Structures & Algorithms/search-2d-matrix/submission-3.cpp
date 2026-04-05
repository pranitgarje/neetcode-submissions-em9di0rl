class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int c=m-1;
        int r=0;
        while(c>=0 && r<n){
            if(matrix[r][c]>target){
                c-- ;
            }
            else if(matrix[r][c]<target){
                  r++ ;
            }
            else{
                return true;
            }
        }
        return false;
    }
};