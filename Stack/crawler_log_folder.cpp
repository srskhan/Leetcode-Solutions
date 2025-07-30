/*
🔹 Problem: crawler log folder
🔗 https://leetcode.com/problems/crawler-log-folder/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(n)
*/

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        
        for(string s: logs){
            if(s == "../"){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(s == "./"){
                continue;
            }
            else{
                st.push(s);
            }
        }
        return st.size();
    }
};