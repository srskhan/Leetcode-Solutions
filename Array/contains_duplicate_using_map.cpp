/*
🔹 Problem: contains duplicate
🔗 https://leetcode.com/problems/contains-duplicate/
🧠 Approach: 
⏱️ Time: 
📦 Space: 
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int x: nums){
            mp[x]++;
            if(mp[x]>1)
                return true;
        }
        return false;
    }
};