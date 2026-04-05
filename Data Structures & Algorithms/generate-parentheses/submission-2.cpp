class Solution {
public:
vector<string> res;
void backTrack(int n,string& s,int open,int close){
   
    if(s.size()==2*n){
        res.push_back(s);
        return ;
    }
    if(open<n){
    s.push_back('(');
    backTrack(n,s,open+1,close);
    s.pop_back();
    }
    if(close<open){
    s.push_back(')');
    backTrack(n,s,open,close+1);
    s.pop_back();
    }
   
   
}
    vector<string> generateParenthesis(int n) {
        string s="";
         backTrack(n,s,0,0);
         return res;
    }
};
