class Solution {
public:
int func(int i,string s,vector<int> &dp){
    if(i==s.size()) return 1 ;
    if(dp[i]!=-1) return dp[i];
    if(s[i]=='0') return 0;
    int first=0;
    int second=0;
    first+=func(i+1,s,dp);
    if(i+1<s.size()){
        int two=stoi(s.substr(i,2));
        if(two>=10 && two<=26)
        second+=func(i+2,s,dp);
    }
    return dp[i]=first+second;
}
    int numDecodings(string s) {
        int n=s.size();
       vector<int> dp(n,-1);
        return func(0,s,dp);
        
    }
};
