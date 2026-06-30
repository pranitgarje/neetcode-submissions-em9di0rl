class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n < m) return "";
        unordered_map<char,int> c1;
        unordered_map<char,int> c2;
        int cnt=0;
        for(int i=0;i<m;i++){
            c1[t[i]]+=1 ;
            // if(c2.find(t[i])!=c2.end()){
            //     if(c1[t[i]]==c2[t[i]]) cnt++ ;
            // }
        }
        // for(int i=0;i<m;i++){
        //     c2[s[i]]+=1 ;
        //     if(c1.find(s[i])!=c1.end()){
        //          if(c1[s[i]]==c2[s[i]]) cnt++ ;
        //     }

        // }

        if(cnt==c1.size()) return s;
        int l=0;
     
        int min_len=INT_MAX;
        string ans="";

        for(int r=0;r<n;r++){
            c2[s[r]]+=1 ;
            if(c1.find(s[r])!=c1.end()){
                if(c2[s[r]]==c1[s[r]]) cnt+=1 ;
            }
            // shrink until valid
            while(cnt==c1.size()){
                if(r-l+1<min_len){
                    min_len=r-l+1;
                    ans=s.substr(l,min_len);
                }
                c2[s[l]]-=1 ;
                if(c1.find(s[l])!=c1.end()){
                if(c2[s[l]]+1==c1[s[l]]) cnt-=1 ;
               
            }
             l+=1 ;
            }
        }
        return ans ;
    }
};
