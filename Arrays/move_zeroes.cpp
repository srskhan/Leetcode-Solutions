/*
🔹 Problem: Move Zeroes
🔗 https://leetcode.com/problems/move-zeroes/
🧠 Approach: Two-pointer
⏱️ Time: O(n)
📦 Space: O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
