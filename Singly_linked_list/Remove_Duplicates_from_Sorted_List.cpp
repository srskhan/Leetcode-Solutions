/*
🔹 Problem: Remove Duplicates from Sorted List
🔗 https://leetcode.com/problems/Remove-Duplicates-from-Sorted-List/
🧠 Approach: 
⏱️ Time: O(N)
📦 Space: O(1)
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode *tmp= head;
        while(tmp->next != NULL)
        {
            if(tmp->val == tmp->next->val)
            {
                tmp->next = tmp->next->next;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};