/*
🔹 Problem: Reverse Linked List
🔗 https://leetcode.com/problems/Reverse-Linked-List/
🧠 Approach: Using Recursion
⏱️ Time: O(n)
📦 Space: O(1)          //optimized space complexity
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* tmp = head;

        while(curr!= nullptr)
        {
            tmp = curr->next;     //store the next node
            curr->next = prev;  // reverse the connection
            prev= curr;       //move prev to curr node
            curr=tmp;       //move curr to the next node
        }
        
        return prev;    // new head of the reverse list
    }
};