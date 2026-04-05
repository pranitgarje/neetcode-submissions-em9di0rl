class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        unordered_map<int,int> count;     // space O(n)
        sort(hand.begin(),hand.end()); // O(nlogn);
        for(int num:hand){
            count[num]++ ;           //O(n);
        }
        for(int num:hand){
            if(count[num]>0){
                for(int i=num;i<num+groupSize;i++){
                    if(count[i]<1) return false;            //O(n);
                    count[i]-- ;
                }
            }
        }
        return true;
    }
};
