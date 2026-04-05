class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1){
            return stoi(tokens[0]);
        }
        stack<int> st;
        int res;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                  st.push(stoi(tokens[i]));
            }
            
            else{
                
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    res=a+b;
                    st.push(res);
                }
                else if(tokens[i]=="-"){
                    res=b-a;
                    st.push(res);
                }
                else if(tokens[i]=="*"){
                    res=a*b;
                    st.push(res);
                }
                else{
                    res=b/a;
                    st.push(res);
                }
               

            }
        }
        return res;
    }
};
