/*
🔹 Problem: remove linked list elements
🔗 https://leetcode.com/problems/remove-linked-list-elements/
🧠 Approach: Brute Force
⏱️ Time: O(n)
📦 Space: O(1)
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return head;
        }
        while(head->val == val){
            head = head->next;
            if(head == nullptr){
                return head;
            }
        }

        ListNode* tmp = head;
        while(tmp->next != nullptr)
        {
            if(tmp->next->val == val){
                tmp->next = tmp->next->next;
            }
            else{
                tmp = tmp->next;
            }
        }
        return head;
        
    }
};
