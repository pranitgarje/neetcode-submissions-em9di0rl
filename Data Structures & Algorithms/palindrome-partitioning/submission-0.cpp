class Solution {
public:
vector<vector<string>> res;
bool isPalindrome(string s){
       int n=s.size();
       for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return false;
       }
       return true;
}
void func(string s,int i,vector<string>& cur,string& temp){
    if(i>=s.size()){
        res.push_back(cur);
        return;
    }
    for(int j=i;j<s.size();j++){
        string temp=s.substr(i,j-i+1);
        if(isPalindrome(temp)){
            cur.push_back(temp);
            func(s,j+1,cur,temp);
            cur.pop_back();
        }
    }

}
    vector<vector<string>> partition(string s) {
        vector<string> cur;
        string temp;
        func(s,0,cur,temp);
        return res;
    }
};
