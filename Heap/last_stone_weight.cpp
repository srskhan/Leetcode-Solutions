/*
🔹 Problem: last stone weight
🔗 https://leetcode.com/problems/last-stone-weight/
🧠 Approach: using Priority Queue
⏱️ Time: O(nlogn)
📦 Space: O(n)
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        for (int val : stones) {
            pq.push(val);
        }

        while (!pq.empty()) {
            if(pq.size() == 1)
                return pq.top();

            int y = pq.top();
            if (!pq.empty())
                pq.pop();
            int x = pq.top();
            if (!pq.empty())
                pq.pop();

            if (x != y) {
                pq.push(y - x);
            }
        }

        return 0;
    }
};