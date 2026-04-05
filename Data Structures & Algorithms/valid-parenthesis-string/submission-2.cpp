class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st1;     // store indices of '('
        stack<int> st2;     // store indices of '*
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st1.push(i);
            }
            else if(s[i]=='*'){
                st2.push(i);
            }
            else{
                if(!st1.empty()){
                     st1.pop();
                }
               else if(!st2.empty()){
                st2.pop();
               }
               else{
                return false;           // edge case : both stacks are empty
               }
            }
        }
        while(!st1.empty() && !st2.empty()){         //both conditions must be checked else segmentation fault
            if(st1.top()<st2.top()){
                st1.pop();
                st2.pop();
            }
            else{
                return false;
            }
        }
        if(!st1.empty()) return false;
        else return true;
    }
};
// TC:O(n)
// SC:O(n)