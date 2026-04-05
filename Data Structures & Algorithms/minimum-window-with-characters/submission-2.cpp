class Solution {
public:
    string minWindow(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        int minLen=INT_MAX;
        string ans="";
        unordered_map<char,int> count;
        for(int i=0;i<n2;i++){
               count[t[i]]++ ;
        }
        int need=count.size();
        unordered_map<char,int> window;
        int have=0;
        int l=0;
       for(int r=0;r<n1;r++){
           window[s[r]]++ ;
           if(count.find(s[r])!=count.end() && count[s[r]]==window[s[r]]) have++ ;
           while(have==need){
            if(r-l+1<minLen){
                minLen=r-l+1;
                ans=s.substr(l,r-l+1);
            }
              window[s[l]]-- ;
              if((count.find(s[l])!=count.end()) && window[s[l]]<count[s[l]]) have-- ;
              l++ ;
           }
          
       }
        return ans;
    }
};
