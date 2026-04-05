class Solution {
public:
    string minWindow(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        int minLen=INT_MAX;
        string ans="";
        unordered_map<char,int> count1;
        for(int i=0;i<n2;i++){
               count1[t[i]]++ ;
        }
        for(int i=0;i<n1;i++){
            unordered_map<char,int> count2;
            for(int j=i;j<n1;j++){
                count2[s[j]]++ ;
                bool flag=true;
                for(char c:t){
                    if((count2.find(c)==count2.end()) || (count1[c]>count2[c])){
                        flag=false;
                    }
                }
                if(flag){
                   if(j-i+1<minLen){
                    minLen=j-i+1;
                    ans=s.substr(i,j-i+1);
                   }
                }
            }
        }
        return ans;
    }
};
