class Solution {
public:
vector<string> res;
void func(int i,vector<string> &vec,string& digits,string& temp){
    if(i>=digits.size()){
        res.push_back(temp);
        return;
    }
    for(int j=0;j<vec[digits[i]-'2'].size();j++){
        temp.push_back(vec[digits[i]-'2'][j]);
        func(i+1,vec,digits,temp);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> vec;
        vec.push_back("abc");
        vec.push_back("def");
        vec.push_back("ghi");
        vec.push_back("jkl");
        vec.push_back("mno");
        vec.push_back("pqrs");
        vec.push_back("tuv");
        vec.push_back("wxyz");
        string temp="";
        func(0,vec,digits,temp);
        return res;
    }
};
