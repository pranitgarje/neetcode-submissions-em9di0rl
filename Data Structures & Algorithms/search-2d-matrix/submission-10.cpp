class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int c=n-1;
        int r=0;
        while(c>=0 && r<m){
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
