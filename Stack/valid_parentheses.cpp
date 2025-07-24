/*
🔹 Problem: valid parentheses
🔗 https://leetcode.com/problems/valid-parentheses/
🧠 Approach: 
⏱️ Time: O(n) 
📦 Space: O(n)
*/

class Solution {
public:
    stack<char>st;
    bool isValid(string s) {
        for(char c:s){
            if(c =='(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty() == true){
                    return false;
                }
                else if(!st.empty()){
                    if(st.top() == '(' && c == ')'){
                        st.pop();
                    }
                    else if(st.top() == '{' && c == '}'){
                        st.pop();
                    }
                    else if(st.top() == '[' && c == ']'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(st.empty()==true){
            return true;
        }
        else{
            return false;
        }
        
    }
};