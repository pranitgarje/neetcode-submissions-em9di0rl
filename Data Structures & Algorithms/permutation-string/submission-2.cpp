class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
           if(n2<n1) return false;
        vector<int> mpp(26,0);
         for(char c:s1){
            mpp[c-'a']++ ;
         }
           string temp1="";
            for(int j=0;j<26;j++){
                temp1+=to_string(mpp[j]);
            }
   
     
        for(int i=0;i<=n2-n1;i++){
            vector<int> freq(26,0);
            string sub=s2.substr(i,n1);
            for(char c:sub){
                freq[c-'a']++;
            }
            string temp2="";
            for(int j=0;j<26;j++){
                temp2+=to_string(freq[j]);
            }
            if(temp2==temp1) return true;

        }
        return false;
    }
};
