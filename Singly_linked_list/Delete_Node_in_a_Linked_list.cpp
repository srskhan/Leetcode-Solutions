/*
🔹 Problem: Delete Node in a Linked list
🔗 https://leetcode.com/problems/delete-node-in-a-linked-list/
🧠 Approach: 
⏱️ Time: O(1)
📦 Space: O(1)
*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};