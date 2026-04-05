class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }
            else{
               if(!st.empty() && c==')' && st.top()=='(') st.pop();
               else if(!st.empty() && c=='}' && st.top()=='{') st.pop();
               else if(!st.empty() && c==']' && st.top()=='[') st.pop();
               else{
                 return false;
               }
                

            }
        }
        if(st.empty()) return true;
        else return false; 
    }
};
