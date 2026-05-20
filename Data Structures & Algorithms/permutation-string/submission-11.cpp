class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n=s2.size();
      int k=s1.size();
      vector<int> c1(26,0);
      vector<int> c2(26,0);
      for(int i=0;i<k;i++){
        c1[s1[i]-'a']++ ;
      }
      int l=0;
      for(int r=0;r<n;r++){
       c2[s2[r]-'a']++ ;
        if(r-l+1>k){
         
          c2[s2[l]-'a']-- ;
          l++ ;
        }
       if(r-l+1==k){
        if(c1==c2) return true;
       }
      }

        return false;
    }
};
