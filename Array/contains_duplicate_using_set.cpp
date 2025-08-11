/*
🔹 Problem: contains duplicate
🔗 https://leetcode.com/problems/contains-duplicate/
🧠 Approach: using Set
⏱️ Time: O(nlogn)
📦 Space: O(n)
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int x: nums){
            st.insert(x);
        }

        if(nums.size() != st.size())
            return true;
        else
            return false;
    }
};