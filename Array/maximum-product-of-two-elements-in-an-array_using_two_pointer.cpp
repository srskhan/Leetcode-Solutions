/*
🔹 Problem: maximum-product-of-two-elements-in-an-array
🔗 https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
🧠 Approach: using two pointer
⏱️ Time: O(n*n)
📦 Space: 
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int mx = INT_MIN;
       for(int i=0;i< nums.size()-1;i++)
       {
           for(int j=i+1; j< nums.size();j++){
               mx = max(mx, ((nums[i]-1)* (nums[j]-1)));
           }
       }
       return mx;
    }
};