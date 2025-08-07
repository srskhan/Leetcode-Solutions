/*
🔹 Problem: kth-largest-element-in-an-array
🔗 https://leetcode.com/problems/kth-largest-element-in-an-array/
🧠 Approach: Using Priority Queue
⏱️ Time: O(nlogn)
📦 Space: O(n)
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int x: nums){
            pq.push(x);
        }

        int largest = k-1;
        while(largest--){
            pq.pop();
        }
        return pq.top();
    }
};
