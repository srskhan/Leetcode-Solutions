/*
🔹 Problem: maximum-product-of-two-elements-in-an-array
🔗 https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
🧠 Approach: 
⏱️ Time: O(nlogn)
📦 Space: 
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx1 = nums[nums.size()-2];
        int mx2 = nums[nums.size()-1];

        return (mx1-1)*(mx2-1);
    }
};
