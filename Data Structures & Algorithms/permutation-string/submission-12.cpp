class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n=s2.size();
      int m=s1.size();
      if(n<m) return false;
      vector<int> c1(26,0);
      vector<int> c2(26,0);
      int l=0;
      for(char c:s1){
        c1[c-'a']+=1 ;
      }
      for(int r=0;r<n;r++){
          c2[s2[r]-'a']+=1 ;
          if(c1==c2) return true;
          if(r-l+1>=m){
            c2[s2[l]-'a']-=1;
            l+=1 ;
          }
      }
      return false;
        
    }
};
