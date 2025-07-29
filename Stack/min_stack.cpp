/*
🔹 Problem: min stack
🔗 https://leetcode.com/problems/min-stack/
🧠 Approach: 
⏱️ Time: O(1)
📦 Space: O(n)
*/

class MinStack {
public:
    MinStack() {
        
    }
    stack<int> st;
    stack<int> st_min;
    
    void push(int val) {
        st.push(val);     //always push at st stack

        if(st_min.empty() == true)
            st_min.push(val);
        else if( val <= st_min.top())
            st_min.push(val);
    }
    
    void pop() {
        if(st_min.top()==st.top()){
            st_min.pop();     // when the top of the st_min and st stack are equal then pop the value from both 
        }

        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st_min.top();
    }
};