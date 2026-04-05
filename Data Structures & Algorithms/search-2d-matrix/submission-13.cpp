class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row;
        int top=0;
        int bot=m-1;
        while(top<=bot){
            row=(top+bot)/2;
            if(matrix[row][n-1]<target){
                top=row+1;
            }
            else if(matrix[row][0]>target){
                 bot=row-1;
            }
          else{
            break;
          }
            
        }
        if(!(top<=bot)){
            return false;
        }
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(matrix[row][mid]<target){
                l=mid+1;
            }
            else if(matrix[row][mid]>target){
                r=mid-1;
            }
            else{
                return true;
            }
        }
        
        return false;
    }
};
