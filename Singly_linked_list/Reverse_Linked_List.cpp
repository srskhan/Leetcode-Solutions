/*
🔹 Problem: Reverse Linked List
🔗 https://leetcode.com/problems/Reverse-Linked-List/
🧠 Approach: Using Recursion
⏱️ Time: O(n)
📦 Space: O(n)
*/

class Solution {
public:
    void reverse_linked_list(ListNode* &head, ListNode* tmp)
    {
        if(tmp->next == NULL){
            head = tmp;
            return;
        }
        reverse_linked_list(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        reverse_linked_list(head,head);
        return head;
    }
};