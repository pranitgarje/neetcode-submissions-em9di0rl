class Solution {
public:
bool func(string s,int i,unordered_set<string> &st,vector<int> &dp){
    if(i==s.size()) return true;
    if(dp[i]!=-1) return dp[i] ;
    string curr="";
    for(int j=i;j<s.size();j++){
        curr+=s[j];
        if(st.count(curr) && func(s,j+1,st,dp)){
            return dp[i]=true;
        }
    }
    return dp[i]=false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        vector<int> dp(n,-1);
        return func(s,0,st,dp);
        
    }
};
