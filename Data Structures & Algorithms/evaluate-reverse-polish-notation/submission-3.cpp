class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1){
            return stoi(tokens[0]);
        }
        int ans=0;
        stack<int> st;
        for(string t:tokens){
            if(t!="+" && t!="-" && t!="*" && t!="/"){
                st.push(stoi(t));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
               int res;
                if(t=="+"){
                    res=a+b;
                    st.push(res);
                }
                else if(t=="-"){
                    res=b-a;
                    st.push(res);
                }
                else if(t=="*"){
                    res=a*b;
                    st.push(res);
                }
                else{
                    res=b/a;
                    st.push(res);
                }
                ans=res;
            }
        }
        return ans;

    }

};
