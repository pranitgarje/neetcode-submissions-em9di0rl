class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](const vector<int> a,const vector<int> b){
            return a[1] < b[1] ;
        });
        int cnt=0;
        pair<int,int> last;
        last={intervals[0][0],intervals[0][1]};
        for(int i=1;i<n;i++){
            if (last.second > intervals[i][0]){
                cnt+=1; 
            }
            else{
                last={intervals[i][0],intervals[i][1]};
            }
        }
        return cnt;
    }
};
